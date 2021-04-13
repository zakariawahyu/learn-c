#include <stdio.h>

int batas;

void tanpaRecursion(){
    printf("========= Tanpa Rekursif ==========\n");
    printf("Pola menurun : ");
    // Pola menurun
    for (int i = batas; i >= 0; i-=2){
        printf("%d ", i);
    }
    printf("\n");
    printf("Pola naik : ");
    // Pola naik
    for (int j = 0; j <= batas; j+=2){
        printf("%d ", j);
    }
    printf("\n");
    printf("===================================\n");
}

void denganRecursion(int batasAtas){
    for (int j = 0; j <= batasAtas; j+=2){
        denganRecursion(batasAtas + j);
        printf("%d ", j);
    }
}

int main(){
    printf("--------------------------------\n");
    printf("Masukkan batas atas : ");
    scanf("%d", &batas);

    denganRecursion(batas);

    return 0;
}