#include <stdio.h>

int main()
{
    int son[2][3];
    int yigindi = 0;
    int i, j;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &son[i][j]);
            yigindi += son[i][j];
        }
    }
    printf("Matritsa:\n");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", son[i][j]);
            if (j < 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Yigindi: %d\n", yigindi);
    return 0;
}