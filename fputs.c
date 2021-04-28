#include <stdio.h>

int main (){
    FILE * file;
    char input[3][256];

    for (int i = 1; i <= 3; i++){
        printf("Masukkan kalimat ke %d : ", i);
        scanf("%s", input[i]);
        file = fopen("file_fputs.txt", "a");
        fputs(input[i], file);
        fclose(file);
        getchar();
    }
    return 0;
}