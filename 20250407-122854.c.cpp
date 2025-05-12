#include <stdio.h>
#include <string.h>

int main() {
    char cad[]="Es una cadena";

    printf("Ingresa una palabra: ");
    scanf("%s", cad);

    int N = strlen(cad);

    printf("Cuadro de %d x %d:\n", N, N);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}