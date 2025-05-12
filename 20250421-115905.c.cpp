#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100], resultado[100] = "";
    int Pal , longitud;

    printf("Ingrese la palabra 1: ");
    scanf("%s", palabra1);

    printf("Ingrese la palabra 2: ");
    scanf("%s", palabra2);

    strcat(resultado, palabra1);
    
    longitud = strlen(palabra1);

    for(Pal= 0; Pal < longitud; Pal++) {
        strcat(resultado, palabra2);
    }

    printf("Resultado: %s\n", resultado);
    return 0;
}

