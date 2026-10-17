#include <stdio.h>

struct Talaba
{
    char ism[20];
    int yosh;
    int ball;
};

int main()
{
    struct Talaba t;
    printf("Talabaning ism: \n");
    scanf("%s", t.ism);
    printf("Talabaning yoshi: \n");
    scanf("%d", &t.yosh);
    printf("Talabaga qoyilgan ball: \n");
    scanf("%d", &t.ball);

    printf("Talabaning ism: %s\n", t.ism);
    printf("Talabaning yosh: %d\n", t.yosh);
    printf("Talabaga qoyilgan ball: %d\n", t.ball);
}