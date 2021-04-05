#include <stdio.h>

void findGanjil(angka){
  if(angka % 2 == 1){
    printf("%d adalah bilangan ganjil ! \n", angka);
  }
}

void findGenap(angka){
  if(angka % 2 == 0){
    printf("%d adalah bilangan genap ! \n", angka);
  }
}

void findPrima(angka){
  int j, k=0;
  for (int i = 1; i <= angka; i++){
    j = angka%i;
    if(j == 0){
      k++;
    }
  }
  if(k == 2){
    printf("%d adalah bilangan prima !", angka);
  }
}

int main() {
  int angka;
  printf("PROGRAM FUNCTION FIND BILANGAN \n");
  printf("Masukkan angka : ");
  scanf("%d", &angka);
  findGanjil(angka);
  findGenap(angka);
  findPrima(angka);

  return 0;
}

