#include <stdio.h>

int main()
{
    int a[5];
    int yigindi = 0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++){
        yigindi += a[i];
    }

    printf("%d\n", yigindi);

    return 0;
}