#include <stdio.h>
#include <string.h>

void main(){
    char kalimat1[100], kalimat2[100];
    printf("-----PROGRAM 2 KALIMAT------\n\n");
    printf("Kalimat 1 : ");
    gets(kalimat1);
    printf("Kalimat 2 : ");
    gets(kalimat2);
    
    int jumlahKalimat1 = strlen(kalimat1); // menghitung string dengan fungsi strlen
    int jumlahKalimat2 = strlen(kalimat2); // menghitung string dengan fungsi strlen

    strcat(kalimat1, " "); // menambahkan spasi setelah kalimat 1
    strcat(kalimat1, kalimat2); // menambahkan kalimat 2 setelah kalimat 1
    printf("------ HASIL OPERASI ------\n");
    printf("Kalimat 1 = %s \n", kalimat1);
    printf("Kalimat 2 = %s \n", kalimat2);
    printf("Gabungan 2 buah inputan kalimat = %s \n", kalimat1); // maka hasilnya kalimat 1 dengan fugnsi strcat diatas
    printf("Hasil membalik kalimat gabungan = %s \n", strrev(kalimat1)); // membalikkan string dengan fungsi strrev
    printf("Jumlah huruf kalimat pertama = %d \n", jumlahKalimat1);
    printf("Jumlah huruf kalimat kedua = %d \n", jumlahKalimat2); 
    printf("Total jumlah huruf = %d \n", jumlahKalimat1+jumlahKalimat2);
    printf("Total perkalian kalimat = %d \n", jumlahKalimat1*jumlahKalimat2);
}