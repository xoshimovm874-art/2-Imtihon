#include <stdio.h>

int katta(int a, int b){
    if (a > b){
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int son1, son2;

    printf("Ikkita butun son kiriting: ");
    scanf("%d %d", &son1, &son2);
    int natija = katta(son1, son2);

    printf("Kattasi: %d\n", natija);

    return 0;
}