#include <stdio.h>
#include  <string.h>

int main(){
    char nom[50];

    printf("soz yozing: ");
    scanf("%s", &nom);

    int uzunlik = strlen(nom);
    printf(" uzunligi %d\n", uzunlik);

    return 0;

}