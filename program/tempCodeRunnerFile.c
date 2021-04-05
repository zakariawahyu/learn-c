#include <stdio.h>

void main(){
    int panjangArray, angka;
    int i = 0;

    printf("PROGRAM PASSING HISTOGRAM DALAM ARRAY \n");
    printf("Massukkan panjang array : ");
    scanf("%d", &panjangArray);

    // deklarasi array dan panjang berdasarkan inputan
    int array[panjangArray];

    while (i < panjangArray){
        printf("Masukkan bilangan ke %d : ", i+1);
        scanf("%d", &angka);

        // menyimpan bilangan ke dalam array
        array[i] = angka;
        i++;
    }

    for (int j = 0; j < panjangArray; j++){
        printf("%d\t\t\t%d\t\t\t", i, array[i]);
        for (int k = 0; k < array[j]; k++){
            printf("*");
        }
        printf("\n");
    }
}