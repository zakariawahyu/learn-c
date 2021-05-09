#include <stdio.h>
#include <stdlib.h>

const int MAX_ELEMENT = 10;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selectionsort(int list[], int n){
    int i, j , posisi;

    for (i = 0; i < (n-1); i++){
        posisi = i;
        for (j = i; j < n; j++){
            if (list[j] < list[posisi]){
               posisi = j;
            }
        }
        if (posisi != i){
            swap(&list[posisi], &list[i]);
        }
    }
}

void listArray(int list[], int n){
    for (int i = 0; i < n; i++){
        printf("%d, ", list[i]);
    }
}

int main(){
    int list[MAX_ELEMENT];

    // generate randome number
    for (int i = 0; i < MAX_ELEMENT; i++){
        list[i] = rand();
    }

    // nilai asli list sebelum sorting
    printf("Nilai asli : \n");
    listArray(list, MAX_ELEMENT);
    printf("\n");

    // sorting dengan bubble sort
    selectionsort(list, MAX_ELEMENT);

    // nilai setelah sorting
    printf("Nilai setelah selection sort : \n");
    listArray(list, MAX_ELEMENT);
    
    return 0;
}   