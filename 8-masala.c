#include <stdio.h>

int main(){
    
    FILE *file = fopen("matn.txt", "w");

    
    fprintf(file, "Salom, C dasturlash!\n");
    printf("Matn faylga yozildi.\n");

    fclose(file);

    return 0;
}