#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Song {
  string title;
  string singer;
  string year;
  string trackNumber;
  string album;
};

struct BRTCode {
  string code;
  Song song;
};

vector<Song> songList;

void addSong() {
  Song newSong;

  cout << "Enter song Title: ";
  getline(cin, newSong.title);

  cout << "Enter song singer: ";
  getline(cin, newSong.singer);

  cout << "Enter song's year: ";
  getline(cin, newSong.year);

  cout << "Enter song's track number: ";
  getline(cin, newSong.trackNumber);

  cout << "Enter song's album: ";
  getline(cin, newSong.album);

  songList.push_back(newSong);
  cout << "Book added successfully." << endl << endl;
}

void editBook() {
  cout << "enter the index of the song you want to edit: " << endl;
  for (int i = 0; i < songList.size(); i++) {
    cout << i << ". " << songList[i].title << endl;
  }

  int index;
  cin >> index;

  cout << "Enter song Title: ";
  getline(cin, songList[index].title);

  cout << "Enter song singer: ";
  getline(cin, songList[index].singer);

  cout << "Enter song's year: ";
  getline(cin, songList[index].year);

  cout << "Enter song's track number: ";
  getline(cin, songList[index].trackNumber);

  cout << "Enter song's album: ";
  getline(cin, songList[index].album);

  cout << "Book added successfully." << endl << endl;
}

void deleteSong() {
  cout << " Enter the index of the song you want to delete: ";

  for (int i = 0; i < songList.size(); i++) {
    cout << i << ". " << songList[i].title << endl;
  }

  int index;
  cin >> index;

  if (index < 0 || index >= songList.size()) {
    cout << "Invalid index. Please try again." << endl;
    return;
  }

  songList.erase(songList.begin() + index);
}

void viewSongs() {
  cout << "Books in songList:" << endl;
  for (int i = 0; i < songList.size(); ++i) {
    cout << "Song " << i + 1 << endl;
    cout << "Title: " << songList[i].title << endl;
    cout << "Singer: " << songList[i].singer << endl;
    cout << "Year: " << songList[i].year << endl;
    cout << "Track Number: " << songList[i].trackNumber << endl;
    cout << "Album: " << songList[i].album << endl;
    cout << endl;
  }
}

int main() {
  int choice;
  do {
    cout << "Choose an action:" << endl;
    cout << "1. Add a song" << endl;
    cout << "2. Edit a song" << endl;
    cout << "3. Delete a song" << endl;
    cout << "4. View all songs" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // Ignore the newline character from the previous cin
    switch (choice) {
    case 1:
      addSong();
      break;
    case 2:
      editBook();
      break;
    case 3:
      deleteSong();
      break;
    case 4:
      viewSongs();
      break;
    case 5:
      cout << "Exiting program..." << endl;
      break;
    default:
      cout << "Invalid choice. Please try again." << endl;
    }
  } while (choice != 5);

  return 0;
}

