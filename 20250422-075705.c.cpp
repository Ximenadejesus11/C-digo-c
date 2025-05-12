#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[50], palabra2[50];
    int res;

    printf("Ingresa la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingresa la segunda palabra: ");
    scanf("%s", palabra2);
    
    if (strcmp(palabra1, palabra2) == 0){
        printf("Ambas palabras son iguales.\n");
    } 
    if (strcmp(palabra1, palabra2) > 0){
        printf("'%s' es mayor que '%s'.\n", palabra2 , palabra1);
    } 
    if (strcmp(palabra2, palabra1) < 0){
        printf("'%s' es menor que '%s'.\n", palabra1, palabra2);
    }
    res = strcmp(palabra1, palabra2);
    
    return 0;
}

    