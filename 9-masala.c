#include <stdio.h>

int main()
{
    int a[3][3];
    int yigindi = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            yigindi += a[i][j];


        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
            
        }
        printf("\n");
        
    }
    
    

    printf("Yig'indi: %d\n", yigindi);

    return 0;
}