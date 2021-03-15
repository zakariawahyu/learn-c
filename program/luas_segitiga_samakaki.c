#include <stdio.h>

void main (){
    int alas, tinggi, luas;

    printf("MENGHITUNG LUAS SEGITIGA \n");
    printf("Masukkan alas segitiga : ");
    scanf("%d", &alas);
    printf("Masukkan tinggi segitiga : ");
    scanf("%d", &tinggi);

    luas = alas * tinggi;
    printf("Jadi luas segitiganya adalah : %d", luas);

}