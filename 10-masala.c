#include <stdio.h>
#include <string.h>

// Mahsulot strukturasini e'lon qilish
struct Mahsulot
{
    char nom[50];
    double narx;
    int soni;
};

// Eng qimmat mahsulotni aniqlash funksiyasi
int engQimmatiniTop(struct Mahsulot m[], int n)
{
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (m[i].narx > m[maxIndex].narx)
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main()
{
    struct Mahsulot m[5];
    int n = 5;

    // 1. 5 ta mahsulot ma'lumotlarini kiritish
    printf("5 ta mahsulot ma'lumotlarini kiriting (Nomi Narxi Soni):\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d-mahsulot: ", i + 1);
        scanf("%s %lf %d", m[i].nom, &m[i].narx, &m[i].soni);
    }

    // 2. Barcha mahsulotlarni ekranga chiqarish
    printf("\n=== BARCHA MAHSULOTLAR ===\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. Nomi: %-15s | Narxi: %10.2f so'm | Soni: %d ta\n",
               i + 1, m[i].nom, m[i].narx, m[i].soni);
    }

    // 3. Eng qimmat mahsulotni aniqlash va chiqarish
    int qimmatIndex = engQimmatiniTop(m, n);
    printf("\n=== ENG QIMMAT MAHSULOT ===\n");
    printf("Nomi: %s, Narxi: %.2f so'm, Soni: %d ta\n",
           m[qimmatIndex].nom, m[qimmatIndex].narx, m[qimmatIndex].soni);

    // 4. Nom bo'yicha qidirish
    char qidirilayotgan[50];
    printf("\nQidirilayotgan mahsulot nomini kiriting: ");
    scanf("%s", qidirilayotgan);

    int topildi = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(m[i].nom, qidirilayotgan) == 0)
        {
            printf("\nMahsulot topildi!\n");
            printf("Nomi: %s\nNarxi: %.2f so'm\nSoni: %d ta\n",
                   m[i].nom, m[i].narx, m[i].soni);
            topildi = 1;
            break;
        }
    }
    if (!topildi)
    {
        printf("\nKechirasiz, '%s' nomli mahsulot topilmadi.\n", qidirilayotgan);
    }

    // 5. Ma'lumotlarni mahsulotlar.txt fayliga yozish
    FILE *fp = fopen("mahsulotlar.txt", "w");
    if (fp == NULL)
    {
        printf("\nFaylga yozishda xatolik yuz berdi!\n");
        return 1;
    }

    fprintf(fp, "=== MAHSULOTLAR RO'YXATI ===\n");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d. Nomi: %-15s | Narxi: %10.2f so'm | Soni: %d ta\n",
                i + 1, m[i].nom, m[i].narx, m[i].soni);
    }
    fclose(fp);

    printf("\nBarcha ma'lumotlar 'mahsulotlar.txt' fayliga muvaffaqiyatli saqlandi.\n");

    return 0;
}