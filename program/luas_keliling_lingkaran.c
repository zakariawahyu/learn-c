#include <stdio.h>

void main(){
    int diameter = 14;
    int jari_jari = diameter/2;
    int luas = (22*jari_jari*jari_jari)/7;
    int keliling = (22*diameter)/7;

    printf("LUAS DAN KELILING RODA\n");
    printf("Diketahui diameter roda = %d cm \n", diameter);
    printf("Diketahui jari-jari roda dalah %d cm \n", jari_jari);
    printf("Maka luas roda adalah %d cm \n", luas);
    printf("Maka keliling roda adalah %d cm", keliling);
}