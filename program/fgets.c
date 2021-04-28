#include <stdio.h>

int main(){
    FILE * file;
    char baca[100];

    file = fopen("file_fputs.txt", "r");
    if (file == NULL) {
        printf("Gagal dimuat \n");
    } else{
        if (fgets(baca, 100, file) != NULL){
            puts(baca);
        }
        fclose(file);
    }
    getchar();
    return 0;
}