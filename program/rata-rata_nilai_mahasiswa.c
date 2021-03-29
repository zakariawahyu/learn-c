#include <stdio.h>

void main(){
    printf("----- Program Menghitung Nilai Rata-Rata X Mahasiswa ----------\n");

    int x_mahasiswa, nilai, total, lulus = 0, tidaklulus = 0;
    int i = 1;
    int min, max, indexMin, indexMax;
    float average;
  

    printf("Masukkan jumlah mahasiswa : ");
    scanf("%d", &x_mahasiswa);

    // deklarasi panjang array sesuai inputan user
    int arrayNilai[x_mahasiswa];

    while (i <= x_mahasiswa)
    {
        printf("Nilai mahasiswa ke %d : ", i);
        scanf("%d", &nilai);
        total = total + nilai;

        // meyimpan nilai ke dalam array
        arrayNilai[i] = nilai;

        // Mengetahui nilai minimum dan max di index array 
        if (arrayNilai[i] > max){
            max = arrayNilai[i];
            indexMax = i;
        } else if (arrayNilai[i] < min) {
            min = arrayNilai[i];
            indexMin = i;
        }

        // Mengetahui lulus atau tidaknya
        if (nilai > 70){
            lulus++;
        } else {
            tidaklulus++;
        }
        
        i++;
    }

    // menghitung rata-rata
    average = total/x_mahasiswa;

    // print
    printf("Jumlah nilai = %d \n", total);
    printf("Nilai rata-rata mahasiswa : %.2f \n", average);
    printf("Nilai minimum : %d pada index ke %d \n", min, indexMin);
    printf("Nilai max : %d pada index ke %d \n", max, indexMax);
    printf("Jumlah mahasiswa lulus : %d \n", lulus);
    printf("Jumlah mahasiswa tidak lulus : %d \n", tidaklulus);
    printf("----------------- Selesai ----------------------------");
}