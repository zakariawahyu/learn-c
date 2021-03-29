#include <stdio.h>

void main(){
    int panjangArray, cariArray, bilangan, found, indexCari;
    int i = 1;

    printf("===== PROGRAM CARI BILANGAN DALAM ARRAY ===== \n");
    printf("Masukkan jumlah bilangan : ");
    scanf("%d", &panjangArray);

    // deklarasi array dan panjang berdasarkan inputan
    int arrayBilangan[panjangArray];

    while (i <= panjangArray){
        printf("Masukkan bilangan ke %d : ", i);
        scanf("%d", &bilangan);

        // menyimpan bilangan ke dalam array
        arrayBilangan[i] = bilangan;
        i++;
    }

    // Mencari bilangan dalam array
    printf("Masukkan bilangan yang ingin anda cari : ");
    scanf("%d", &cariArray);
    for (int j = 1; j <= panjangArray; j++){
        if (arrayBilangan[j] == cariArray){
            found = 1;
            indexCari = j;
            break;
        }
    }

    // print hasil
    if (found == 1){
        printf("Bilangan %d yang anda cari ditemukan ! pada urutan ke %d", cariArray, indexCari);
    } else {
        printf("Maaf bilangan %d yang anda cari tidak ditemukan", cariArray);
    }
}