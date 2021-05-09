#include <stdio.h>
#include <stdlib.h>

const int MAX_ELEMENT = 10;

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int *list, int kiri, int kanan){
    int i, j, k;
    if (kiri < kanan){
        j = kiri;
        k = kanan + 1;

        do{
            do{
                j++;
            } while (j <= kanan && list[j] < list[kiri]);
            do{
                k--;
            } while (list[k] > list[kiri]);
            if (j < k){
                swap(&list[j], &list[k]);
            }
        } while (j <= k);
        swap(&list[kiri], &list[k]);
        quicksort(list, kiri, k-1);
        quicksort(list, k+1, kanan);
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
    quicksort(list, 0, MAX_ELEMENT-1);

    // nilai setelah sorting
    printf("Nilai setelah quick sort : \n");
    listArray(list, MAX_ELEMENT);
    
    return 0;
}   