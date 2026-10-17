#include <stdio.h>
#include <string.h>

int main()
{
    char soz[50];

    printf("Soz kirting: ");
    scanf("%s", soz);

    printf("Soz uzunligi: %d", strlen(soz));
}