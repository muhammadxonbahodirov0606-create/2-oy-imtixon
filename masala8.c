#include <stdio.h>

int main(){
    FILE *f = fopen("matn.txt", "r");

    if (f == NULL) {
        printf("Fayl mavjud emas!");
        return 0;
    }

    char belgi;
    while ((belgi = fgetc(f)) != EOF){
        printf("%c", belgi);
    }
    return 0;
}