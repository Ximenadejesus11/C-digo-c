#include <stdio.h>

int main() {
    // Declarar variables de tipo float para mayor precisión
    float resultado;

    // Calcular la expresión
    resultado = (1.0 / 3) + (3.0 / 5) + (1.0 / 30) / (23.0 / 30);

    // Imprimir el resultado con cuatro decimales
    printf("El resultado es: %.4f\n", resultado);

    return 0;
}