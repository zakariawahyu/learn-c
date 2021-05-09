#include <stdio.h>
#include <stdlib.h>

const int MAX_ELEMENT = 10;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int list[], int n){
    for (int i = 0; i < (n-1); i++){
        for (int j = 0; j < (n-(i+1)); j++){
            if (list[j] > list[j+1]){
                swap(&list[j], &list[j+1]);
            }
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
    bubblesort(list, MAX_ELEMENT);

    // nilai setelah sorting
    printf("Nilai setelah bubble sort : \n");
    listArray(list, MAX_ELEMENT);

    return 0;
}   