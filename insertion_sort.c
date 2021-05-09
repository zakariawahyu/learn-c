#include <stdio.h>
#include <stdlib.h>

const int MAX_ELEMENT = 10;

void insertionsort(int list[], int n){
    int i, j , temp;

    for (i = 1; i < n; i++){
        temp = list[i];
        for (j = i-1; j >= 0 && list[j]>temp; j--){
            list[j+1] = list[j];
        }
        list[j+1] = temp;
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
    insertionsort(list, MAX_ELEMENT);

    // nilai setelah sorting
    printf("Nilai setelah insertion sort : \n");
    listArray(list, MAX_ELEMENT);
    
    return 0;
}   