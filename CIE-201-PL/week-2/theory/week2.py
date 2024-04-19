print("-------------------------")
print("Nama: Galih Adhi Kusuma")
print("NIM: 20230801245")
print("-------------------------")

# Program pertama
# Operator pembanding sama dengan (equal comparison operator)
print("Program Operator Pembanding")
print("1. Program Pertaama: Pembanding sama dengan (equal comparison operator '=')")
print("2. Program Kedua: Pembanding Tidak Sama Dengan (not equal comparison operator) '!='")
print("3. Program Ketiga: Pembanding Kurang Dari sama Dengan (Less than and Equal comparison operator) '<='")
print("4. Program Keempat: Pembanding Lebih Dari Sama Dengan (Greater than and Equal to comparison operator '>=)")

operator = input("Masukan pilihan operator: ") # input operator

num1 = 0;
num2 = 0;
num3 = 0;

if operator == '1':
    print("\nOperator yang dipilih: Pembanding sama dengan '=='")
    num1 = int(input("Masukkan angka pertama: "))
    num2 = int(input("Masukkan angka kedua: "))
    num3 = int(input("Masukkan angka ketiga: "))

    if num1 == num2:
        print(f"   {num1} (Angka 1) sama dengan {num2} (Angka 2)")
    if num1 == num3:
        print(f"   {num1} (Angka 1) sama dengan {num3} (Angka 3)")
    if num2 == num3:
        print(f"   {num2} (Angka 2) sama dengan {num3} (Angka 3)")
    if num1 != num2 and num1 != num3 and num2 != num3:
        print("Tidak ada angka yang sama")

elif operator == '2':
    print("\nOperator yang dipilih: Pembanding Tidak Sama Dengan '!='")
    num1 = int(input("Masukkan angka pertama: "))
    num2 = int(input("Masukkan angka kedua: "))
    num3 = int(input("Masukkan angka ketiga: "))

    if num1 != num2:
        print(f"   {num1} (Angka 1) tidak sama dengan {num2} (Angka 2)")
    if num1 != num3:
        print(f"   {num1} (Angka 1) tidak sama dengan {num3} (Angka 3)")
    if num2 != num3:
        print(f"   {num2} (Angka 2) tidak sama dengan {num3} (Angka 3)")
    if num1 == num2 and num1 == num3 and num2 == num3:
        print("Tidak ada angka yang tidak sama")

elif operator == '3':
    print("\nOperator yang dipilih: Pembanding Kurang Dari Sama Dengan '<='")
    num1 = int(input("Masukkan angka pertama: "))
    num2 = int(input("Masukkan angka kedua: "))
    num3 = int(input("Masukkan angka ketiga: "))

    if num1 <= num2:
        print(f"   {num1} (Angka 1) kurang dari atau sama dengan {num2} (Angka 2)")
    if num1 <= num3:
        print(f"   {num1} (Angka 1) kurang dari atau sama dengan {num3} (Angka 3)")
    if num2 <= num1: 
        print(f"   {num2} (Angka 2) kurang dari atau sama dengan {num1} (Angka 1)")
    if num2 <= num3:
        print(f"   {num2} (Angka 2) kurang dari atau sama dengan {num3} (Angka 3)")
    if num3 <= num1:
        print(f"   {num3} (Angka 3) kurang dari atau sama dengan {num1} (Angka 1)")
    if num3 <= num2: 
        print(f"   {num3} (Angka 3) kurang dari atau sama dengan {num2} (Angka 2)")
    if num1 > num2 and num1 > num3 and num2 > num3:
        print("Tidak ada angka yang kurang dari atau sama dengan")

elif operator == '4':
    print("\nOperator yang dipilih: Pembanding Lebih Dari Sama Dengan '>='")
    num1 = int(input("Masukkan angka pertama: "))
    num2 = int(input("Masukkan angka kedua: "))
    num3 = int(input("Masukkan angka ketiga: "))

    if num1 >= num2:
        print(f"   {num1} (Angka 1) Lebih dari atau sama dengan {num2} (Angka 2)")
    if num1 >= num3:
        print(f"   {num1} (Angka 1) Lebih dari atau sama dengan {num3} (Angka 3)")
    if num2 >= num1: 
        print(f"   {num2} (Angka 2) Lebih dari atau sama dengan {num1} (Angka 1)")
    if num2 >= num3:
        print(f"   {num2} (Angka 2) Lebih dari atau sama dengan {num3} (Angka 3)")
    if num3 >= num1:
        print(f"   {num3} (Angka 3) Lebih dari atau sama dengan {num1} (Angka 1)")
    if num3 >= num2: 
        print(f"   {num3} (Angka 3) kurang dari atau sama dengan {num2} (Angka 2)")
    if num1 < num2 and num1 < num3 and num2 < num3:
        print("Tidak ada angka yang lebih dari atau sama dengan")

else:
    print("Program yang dipilih tidak tersedia")


