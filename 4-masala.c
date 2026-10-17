#include <stdio.h>

int main()
{
    int x ;
    printf("son kiriting: ");
    scanf("%d", &x);
    
    int *son = &x; 
    *son = 25;

    printf(" yangi qiymat: %d\n", x);

    return 0;
}