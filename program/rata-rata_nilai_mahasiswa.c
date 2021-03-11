#include <stdio.h>

void main(){
    printf("----- Program Menghitung Nilai Rata-Rata X Mahasiswa ----------\n");

    int x_mahasiswa, nilai, total, average;
    int i = 0;

    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &x_mahasiswa);

    while (i < x_mahasiswa)
    {
        printf("Nilai mahasiswa ke : ", i);
        scanf("%d", &nilai);
        total = total + nilai;
        i++;
    }

    average = total/x_mahasiswa;
    printf("Jumlah nilai = %d \n", total);
    printf("Nilai rata-rata mahasiswa : %d \n", average);
    printf("----------------- Selesai ----------------------------");
}