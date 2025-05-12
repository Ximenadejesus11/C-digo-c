#include <stdio.h>

int main(){
int i, j;

// Imprimir encabezado
printf("    | ");
for (i = 1; i <= 10; i++) {
    printf("%d ", i);
}
printf("\n");

for (i = 1; i <= 10; i++) {
}
printf("\n");

// Imprimir filas de tabla de multiplicar
for (i = 1; i <= 10; i++) {
    printf("%d ", i);
    for (j = 1; j <= 10; j++) {
        printf("%d ", i * j);
    }
    printf("\n");
}

return 0;

}

