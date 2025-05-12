#include <stdio.h>
#include <string.h>

void mostrarInverso(char * cadena) {
    int longitud = strlen(cadena);
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");
}

int main() {
    char carac[100];

    printf("Ingrese una cadena de caracteres: ");
    scanf("%[^\n]", carac);

    printf("Cadena en orden inverso: ");
    mostrarInverso(carac);

    return 0;
}