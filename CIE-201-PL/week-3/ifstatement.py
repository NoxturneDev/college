nama = input("Masukkan nama: ")
NIK = input("Masukkan NIK: ")
gaji = int(input("Masukkan gaji: "))

jamLembur = int(input("Masukkan jam lembur: "))
hariTidakMasuk = int(input("Masukkan hari tidak masuk: "))

isMenikah = input("Apakah sudah menikah? (y/n): ")

bpjs = 0.15
pajak = 0.05

bonusLembur = jamLembur * 50000
potonganTidakMasuk = 50000

if(isMenikah == "y") or (isMenikah == "Y") :
    tunjangan = 500000
else :
    tunjangan = 0

gajiBersih = gaji - (bpjs * gaji) - (pajak * gaji) + bonusLembur - potonganTidakMasuk + tunjangan

print("gaji bersih: ", int(gajiBersih))

