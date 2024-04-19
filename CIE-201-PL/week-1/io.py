# Get user input
print("User data program! Input your data below \n");

name = input("Name: ")
nim = input("NIM: ")
gender = input("Gender: ")
age = input("Usia: ")

# Print user input
print("Hi welcome! " + name + "\n")

print(
    "This is your data: " + "\n"
    + "Name: " + name + "\n"
    + "NIM: " + nim + "\n"
    + "Gender: " + gender + "\n"
    + "Usia: " + age + "\n"
)

# Save user input to file
save = open("user-data.txt", "w")

# create array of names
names = ["Name", "NIM"]

#sort the array of names
names.sort()


