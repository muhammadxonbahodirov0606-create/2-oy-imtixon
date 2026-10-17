#include <stdio.h>

int yigindi(int son){
    if (son == 0)
    {
        return 0;
    }

    return son + yigindi(son - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("yigindi: %d\n", yigindi(n));
}