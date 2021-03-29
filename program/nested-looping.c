#include <stdio.h>

void main(){
    int baris, kolom;

    printf("=== PROGRAM MENCETAK BINTANG ====\n");
    printf("Masukkan panjang baris : ");
    scanf("%d", &baris);
    printf("Masukkan panjang kolom : ");
    scanf("%d", &kolom);

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            printf("*");
        }
        puts("");
    }
}