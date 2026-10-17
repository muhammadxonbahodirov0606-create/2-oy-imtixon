#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *pointer = &n;
    *pointer = 25;

    printf("Yangi qiymat: %d\n", n);
    return 0;
}