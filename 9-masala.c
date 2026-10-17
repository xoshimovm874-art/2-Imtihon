#include <stdio.h>

int engKattasini(int a[3][3]){
    int max = a[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    return max;
}

int main(){
    int a[3][3];

    printf("3x3 matritsa elementlarini kiriting:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatritsa:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int maxNatija = engKattasini(a);
    printf("\nMatritsadagi eng katta element: %d\n", maxNatija);

    printf("\nHar bir satr yig'indisi:\n");
    for (int i = 0; i < 3; i++)
    {
        int satrYigindisi = 0;
        for (int j = 0; j < 3; j++)
        {
            satrYigindisi += a[i][j];
        }
        printf("%d-satr yig'indisi: %d\n", i + 1, satrYigindisi);
    }

    return 0;
}