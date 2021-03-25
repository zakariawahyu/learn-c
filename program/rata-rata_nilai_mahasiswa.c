#include <stdio.h>

void main(){
    printf("----- Program Menghitung Nilai Rata-Rata X Mahasiswa ----------\n");

    int x_mahasiswa, nilai, total, average;
    int i = 1;
    int max ,min;

    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &x_mahasiswa);

    while (i <= x_mahasiswa)
    {
        printf("Nilai mahasiswa ke %d : ", i);
        scanf("%d", &nilai);
        total = total + nilai;

        if (nilai < min)
        {
            min = nilai;
        } else if (nilai > max)
        {
            max = nilai;
        }
        
        i++;
    }

    average = total/x_mahasiswa;
    printf("Jumlah nilai = %d \n", total);
    printf("Nilai rata-rata mahasiswa : %d \n", average);
    printf("Nilai minimum : %d \n", min);
    printf("Nilai max : %d \n", max);
    printf("----------------- Selesai ----------------------------");
}