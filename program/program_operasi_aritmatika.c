#include <stdio.h>

int main () {
    int a, b; //a: bilangan pertama, b: bilangan kedua
    printf("\t\tTUGAS KELOMPOK TEAM 7\n\n");
    printf("----- PROGRAM ARITMATIKA 2 BUAH BILANGAN -----\n\n");

    ganjil: //Validasi bilangan ganjil
    printf("Masukan bilangan ke-1 (ganjil): ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d bukan bilangan ganjil\n", a);
        goto ganjil;
    }

    genap: //Validasi bilangan genap
    printf("Masukan bilangan ke-2 (genap): ");
    scanf("%d", &b);
    if (b % 2 != 0) {
        printf("%d bukan bilangan genap\n", b);
        goto genap;
    }
    
    int jumlah = a + b;
    float rata_rata = (float) jumlah / 2;
    int kuadrat_a = a * a;
    int kuadrat_b = b * b;
    printf("\n----- HASIL PROSES ARITMATIKA -----\n\n");
    printf("Bilangan ke-1 = %d\n", a);
    printf("Bilangan ke-2 = %d\n", b);
    printf("Nilai penjumlahan = %d\n", jumlah);
    printf("Nilai rata - rata = %.1f\n", rata_rata);
    printf("Nilai kuadrat bilangan pertama = %d\n", kuadrat_a);
    printf("Nilai kuadrat bilangan kedua = %d\n", kuadrat_b);
    return 0;
}