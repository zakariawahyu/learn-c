#include <stdio.h>
int panjangArray, angka;
int i = 0;
int array[] = {};

void inputArray(){
    printf("PROGRAM PASSING HISTOGRAM DALAM ARRAY \n");
    printf("Massukkan panjang array : ");
    scanf("%d", &panjangArray);

    while (i < panjangArray){
        printf("Masukkan bilangan ke %d : ", i+1);
        scanf("%d", &angka);

        // menyimpan bilangan ke dalam array
        array[i] = angka;
        i++;
    }
}

void histogramAray(){
  printf("\n");
    printf("----------------------------------------------------\n");
    printf("Element\t\t\tValue\t\t\tHistogram \n");
    for (int j = 0; j < panjangArray; j++){
        printf("%d\t\t\t%d\t\t\t", j, array[j]);
        for (int k = 0; k < array[j]; k++){
            printf("*");
        }
        printf("\n");
    }
    printf("----------------------------------------------------");
}

void main(){
   inputArray();
   histogramAray();
}