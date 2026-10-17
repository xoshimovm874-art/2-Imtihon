#include <stdio.h>

int yigindi(int n){
    if (n <= 1){
        return n;
    }
    return n + yigindi(n - 1);
}

int main(){
    int n;

    printf("son kiriting: ");
    scanf("%d", &n);

    printf(" %d\n", yigindi(n));

    return 0;
}