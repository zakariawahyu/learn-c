#include <stdio.h>

void main(){
    // %d untuk menampilkan nomor dengan int 
    int a = 1;
    printf("Nomor pertama : %d \n", a);

    // %e, %f, %g  untuk menampilan nomor dengan float atau pecahan
    float b = 1.2;
    printf("Nomor kedua : %g \n", b);

    // %s untuk menampilkan string
    char nama[] = "Zakaria";
    printf("Nama saya : %s \n", nama);

    // puts untuk print tanpa enter atau \n
    puts("Tanpa n");
    puts("Bisa enter");

    //inputan
    // dengan cara normal scanf
    char namasaya[50];
    int umur;
    printf("-------------- Input Biasa dengan scanf----------------\n");
    printf("Masukkan nama : ");
    scanf("%s", &namasaya);
    printf("Masukkan umur : ");
    scanf("%d", &umur);
    printf("Nama : %s \n", namasaya);
    printf("Umur : %d \n", umur);
    printf("----------------------------------\n");

    // dengan getchar()
    // mengambil karater berikutnya dan menunggu inputan enter
    char huruf;
    printf("------------------ Input dengan getchar --------------------\n");
    printf("Masukkan huruf : ");
    huruf = getchar();

    printf("Huruf anda : ");
    putchar(huruf);
    printf("\n");
    printf("----------------------------------\n");

    // dengan gets()
    char univ[500];
    printf("------------- Input dengan get -----------------\n");
    printf("Asal univ : ");
    gets(univ);
    printf("Univ anda adalah : %s \n", univ);
    printf("----------------------------------\n");

}