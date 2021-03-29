#include <stdio.h>

void main(){
    int jumlah;

    printf("=== PROGRAM MENCETAK BINTANG MENURUN ====\n");
    printf("Masukkan jumlah baris : ");
    scanf("%d", &jumlah);

    for (int i = 0; i <= jumlah; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        puts("");
    }
}