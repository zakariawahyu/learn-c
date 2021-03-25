#include <stdio.h>

void main(){
    int nilai;
    float bobot;
    char grade;

    printf("---- PROGRAM GRADE NILAI MAHASISWA ---- \n");
    printf("Masukkan nilai mahasiswa : ");
    scanf("%d", &nilai);

    // Menggunakan nested if
    if (0 <= nilai && nilai <= 49){
        grade = 'E';
    } else if (50 <= nilai && nilai <= 64 ){
        grade = 'D';
    } else if (65 <= nilai && nilai <=69){
        grade = 'C';
    } else if (70 <= nilai && nilai <= 74){
        grade = 'B-';
    } else if (75 <= nilai && nilai <= 79){
        grade = 'B';
    } else if (80 <= nilai && nilai <= 84){
        grade = 'B+';
    } else if (85 <= nilai && nilai <= 89){
        grade = 'A-';
    } else if (90 <= nilai && nilai <= 100){
        grade = 'A';
    }

    // Menggunakan switch case
    switch (grade){
    case('E'):
        bobot = 0;
        break;
    case('D'):
        bobot = 1;
        break;
    case('C'):
        bobot = 2;
        break;
    case('B-'):
        bobot = 2.5;
        break;
    case('B'):
        bobot = 3;
        break;
    case('B+'):
        bobot = 3.33;
        break;
    case('A-'):
        bobot = 3.67;
        break;
    case('A'):
        bobot = 4;
        break;
    }

    printf("Nilai mahasiswa : %d \n", nilai);
    printf("Grade Nilai : %c \n", grade);
    printf("Bobot Nilai : %g", bobot);
}