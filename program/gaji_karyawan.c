#include <stdio.h>
#include <string.h>

void main(){
    const int gaji = 2000000;
    char nama[100], pendidikan[50];
    int golongan, jam_kerja, tunjangan_jabatan, tunjangan_pendidikan, lembur, total_gaji, persentase_golongan;
    float persentase_pendidikan;

    printf("PROGRAM MENGHITUNG GAJI KARYAWAN \n");
    printf("Nama Karyawan : ");
    gets(nama); // contoh input dengan get()
    printf("Golongan Jabatan : ");
    scanf("%d", &golongan); // contoh input dengan scanf()
    printf("Pendidikan : ");
    scanf("%s", &pendidikan);
    printf("Jumlah jam kerja : ");
    scanf("%d", &jam_kerja);

    switch (golongan) {
    case 1:
        persentase_golongan = 5;
        break;
    case 2:
        persentase_golongan = 10;
        break;
    case 3:
        persentase_golongan = 15;
        break;
    }

    if (strcmp(pendidikan, "SMA") == 0) {
        persentase_pendidikan = 2.5;
    }
    else if (strcmp(pendidikan, "D3") == 0) {
       persentase_pendidikan = 5;
    } 
    else if (strcmp(pendidikan, "S1") == 0) {
        persentase_pendidikan = 10;
    }
    
    tunjangan_jabatan = (gaji * persentase_golongan) / 100;
    tunjangan_pendidikan = (gaji * persentase_pendidikan) / 100;
    
    if (jam_kerja > 8) {
        lembur = (jam_kerja - 8) * 3000;
    }
    else {
        lembur = 0;
    }
    
    total_gaji = gaji + tunjangan_jabatan + tunjangan_pendidikan + lembur;

    printf("------ Data Gaji Karyawan ------\n");
    printf("Nama Karyawan : Rp. %s \n", nama);
    printf("Tunjangan Jabatan : Rp. %d \n", tunjangan_jabatan);
    printf("Tunjangan Pendidikan : Rp. %d \n", tunjangan_pendidikan);
    printf("Honor Lembur : Rp. %d \n", lembur);
    printf("Total Gaji : Rp. %d \n", total_gaji);
}