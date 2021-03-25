#include <stdio.h>

void main(){
    printf("----- Program Menghitung Nilai Rata-Rata X Mahasiswa ----------\n");

    int x_mahasiswa, nilai, total, average, lulus = 0, tidaklulus = 0;
    int i = 1;
    int min, max;
  

    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &x_mahasiswa);

    while (i <= x_mahasiswa)
    {
        printf("Nilai mahasiswa ke %d : ", i);
        scanf("%d", &nilai);
        total = total + nilai;

        // Mengetahui nilai minimum dan max
        if (nilai > max){
            max = nilai;
        } else if (nilai < min) {
            min = nilai;
        }

        // Mengetahui lulus atau tidaknya
        if (nilai > 70){
            lulus++;
        } else {
            tidaklulus++;
        }
        
        i++;
    }

    average = total/x_mahasiswa;
    printf("Jumlah nilai = %d \n", total);
    printf("Nilai rata-rata mahasiswa : %d \n", average);
    printf("Nilai minimum : %d \n", min);
    printf("Nilai max : %d \n", max);
    printf("Jumlah mahasiswa lulus : %d \n", lulus);
    printf("Jumlah mahasiswa tidak lulus : %d \n", tidaklulus);
    printf("----------------- Selesai ----------------------------");
}