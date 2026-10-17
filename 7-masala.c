#include <stdio.h>

struct Talaba{
    char ism[50];
    int yosh;
    int ball;
};

int main(){
    struct Talaba t;
    scanf("%s %d %d", t.ism, &t.yosh, &t.ball);

    printf("Ism: %s\n", t.ism);
    printf("Yosh: %d\n", t.yosh);
    printf("Ball: %d\n", t.ball);

    return 0;
}