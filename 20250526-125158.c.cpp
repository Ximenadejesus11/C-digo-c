#include <stdio.h>
#include <stdlib.h>

int main() {
    int u, a;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &u);
    
    int *arreglo = (int*)malloc(u * sizeof(int));

    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria para el arreglo.\n");
        return 1;
    }
    printf("Ingrese los elementos del arreglo:\n");
    for (a = 0; a < u; a++) {
        printf("Elemento %d: ", a);
        scanf("%d", &arreglo[a]);
    }
    printf("Los elementos del arreglo son:\n");
    for (a = 0; a < u; a++) {
        printf("%d ", arreglo[a]);
    }
    printf("\n");
    free(arreglo);
    return 0;
}
