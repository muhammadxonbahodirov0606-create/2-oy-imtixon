#include <stdio.h>

int main(void)
{
    int son[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &son[i]);
        sum += son[i];
    }

    printf("Yigindi: %d\n", sum);
    return 0;
}