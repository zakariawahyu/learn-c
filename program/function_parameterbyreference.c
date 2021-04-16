#include <stdio.h>

int luasPersegiPanjang(int *p, int *l){
    int luas = *p * *l;
    return luas;
}

void main(){
    int panjang, lebar;
    printf("---- LUAS PERSEGI PANJANG -----\n");
    printf("Masukkan panjang : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar : ");
    scanf("%d", &lebar);
    printf("Luas persegi panjang adalah : %d", luasPersegiPanjang(&panjang, &lebar));
}