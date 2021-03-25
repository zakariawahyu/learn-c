#include <stdio.h>

void main(){
    int angkaAwal, angkaAkhir;
    printf("----- PROGRAM GANJIL GENAP & PRIMA -----\n");
    printf("Masukkan angka awal : ");
    scanf("%d", &angkaAwal);
    printf("Masukkan angka akhir : ");
    scanf("%d", &angkaAkhir);

    printf("=============================\n");
    printf("Bilangan ganjil, genap dan prima antara %d dan %d adalah : \n", angkaAwal, angkaAkhir);

    bilGanjil(angkaAwal, angkaAkhir);
    bilGenap(angkaAwal, angkaAkhir);
    bilPrima(angkaAwal, angkaAkhir);
}

int bilGanjil(int awal, int akhir){
    // mencetak bilangan ganjil
    printf("Bilangan ganjil : \n");
    for (int i = awal; i < akhir; i++)
    {
        // ganjil
        if (i % 2 == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}

int bilGenap(int awal, int akhir){
    // mencetak bilangan genap
    printf("Bilangan genap : \n");
    for (int i = awal; i < akhir; i++)
    {
        // genap
        if (i % 2 == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}

int bilPrima(int awal, int akhir){
    // mencetak bilangan prima
    printf("Bilangan prima : \n");

    for (int i = awal+1; i <= akhir; i++)
    {
        int prim = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prim = 1;
            }
        }
        if (prim == 0)
        {
                printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}