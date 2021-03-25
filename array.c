#include <stdio.h>

void main(){
    char *bulan[12] = {
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember",
    };

    for (int i = 0; i < 12; i++){
        printf("Index nama-nama bulan ke %d adalah : %s \n", i, bulan[i]);        
    }
    
}