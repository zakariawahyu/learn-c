#include <stdio.h>

int tanggal, bulan, tahun;
char nama[];
char *bintang;

void main(){

    printf("Masukkan Nama : ");
    scanf("%s", &nama);
    printf ("Masukkan Tanggal lahir (DD-MM-YYYY) : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);   

    if (tanggal>=20&&bulan==1||tanggal<=18&&bulan==2) {
        bintang = "Aquarius";
    }
    else if (tanggal<=29&&bulan==2||tanggal<=20&&bulan==3){
        bintang = "Pisces";
    }
    else if (tanggal<=31&&bulan==3||tanggal<=19&&bulan==4){
        bintang = "Aries";
    }
    else if (tanggal<=30&&bulan==4||tanggal<=20&&bulan==5){
        bintang = "Taurus";
    }
    else if (tanggal<=31&&bulan==5||tanggal<=21&&bulan==6){
        bintang = "Gemini";
    }
    else if (tanggal<=30&&bulan==6||tanggal<=22&&bulan==7){
        bintang = "Cancer";
    }
    else if (tanggal<=31&&bulan==7||tanggal<=22&&bulan==8){
        bintang = "Leo"; 
    }
    else if (tanggal<=31&&bulan==8||tanggal<=22&&bulan==9){
        bintang = "Virgo"; 
    }
    else if (tanggal<=30&&bulan==9||tanggal<=23&&bulan==10){
        bintang = "Libra";
    }
    else if (tanggal<=31&&bulan==10||tanggal<=21&&bulan==11){
        bintang = "Scorpio"; 
    }
    else if (tanggal<=30&&bulan==11||tanggal<=21&&bulan==12){
        bintang = "Sagitarius";  
    }
    else if (tanggal<=31&&bulan==12||tanggal<20&&bulan==1){
        bintang = "Capricorn";
    }
    else if(tanggal>31&&bulan>12){
        printf("Anda melakukan kesalahan, format anda salah \n");
    }

    printf("Nama : %s \n", nama);
    printf("Bintang : %s \n", bintang);
    printf("Tanggal lahir : %d-%d-%d \n", tanggal, bulan, tahun);
}