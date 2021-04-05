#include <stdio.h>
int jumlah, deret[], i = 0;

void deretFibonacci(){
    printf("Masukan jumlah deret fibonacci: ");
    scanf("%d", &jumlah);
    printf("\n");
    printf("-----------------------------------------\n");
    printf("Deret fibonaci adalah : ");
        do{
        if(i<2){
            deret[i]=1;
        }
        else{
            deret[i]=deret[i-2]+deret[i-1];
        }
        printf("%d ", deret[i]);    
        i++;
    } while(i<jumlah);
    printf("\n");
    printf("-----------------------------------------\n");
}

void main(){
    deretFibonacci();
}