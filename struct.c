#include <stdio.h>

struct data{
    int ktp;
    char nama[25];
    int gaji;
};

void main(){
    struct data buruh;

    printf("Input data buruh: \n");
    printf("Masukkan nomor KTP : ");
    scanf("%d", buruh.ktp);
    printf("Masukkan nama buruh : ");
    scanf("%s", buruh.nama);
    printf("Masukkan gaji pokok : ");
    scanf("%d", buruh.gaji);
    printf("\n");
    printf("Data buruh : \n");
    printf("Nomor KTP : %d \n", buruh.ktp);
    printf("Nama buruh : %s \n", buruh.nama);
    printf("Gaji pokok : %d \n", buruh.gaji);
}