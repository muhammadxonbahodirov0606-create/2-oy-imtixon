#include <stdio.h>
#include <string.h>

struct Mahsulot
{
    char nomi[50];
    int narxi, soni;
};

int main()
{
    struct Mahsulot m[5];
    char qidiruv[50];
    int qimmat = 0, topildi = 0;
    FILE *fayl;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %d", m[i].nomi, &m[i].narxi, &m[i].soni);
        if (i == 0 || m[i].narxi > m[qimmat].narxi)
            qimmat = i;
    }
    scanf("%s", qidiruv);

    for (int i = 0; i < 5; i++)
        printf("%s %d %d\n", m[i].nomi, m[i].narxi, m[i].soni);

    printf("Eng qimmat: %s %d\n", m[qimmat].nomi, m[qimmat].narxi);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(m[i].nomi, qidiruv) == 0)
        {
            printf("Mahsulot topildi!\n Nomi: %s\n Narxi: %d\n Soni: %d\n",
                   m[i].nomi, m[i].narxi, m[i].soni);
            topildi = 1;
            break;
        }
    }
    if (!topildi)
        printf("Mahsulot topilmadi!\n");

    fayl = fopen("mahsulotlar.txt", "w");
    if (fayl == NULL)
        return 1;
    for (int i = 0; i < 5; i++)
        fprintf(fayl, "%s %d %d\n", m[i].nomi, m[i].narxi, m[i].soni);
    fclose(fayl);
    printf("Ma'lumotlar mahsulotlar.txt fayliga saqlandi.\n");
    return 0;
}
