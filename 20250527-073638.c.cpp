#include <stdio.h>

void sumar() {
    float x, e;
    printf("Ingrese el primer número: ");
    scanf("%f", &x);
    printf("Ingrese el segundo número: ");
    scanf("%f", &e);
    printf("Resultado: %2.1f\n", x + e);
}
void restar() {
    float x, e;
    printf("Ingrese el primer número: ");
    scanf("%f", &x);
    printf("Ingrese el segundo número: ");
    scanf("%f", &e);
    printf("Resultado: %2.1f\n", x - e);
}

void multiplicar() {
    float x, e;
    printf("Ingrese el primer número: ");
    scanf("%f", &x);
    printf("Ingrese el segundo número: ");
    scanf("%f", &e);
    printf("Resultado: %2.1f\n", x * e);
}

void dividir() {
    float x, e;
    printf("Ingrese el primer número: ");
    scanf("%f", &x);
    printf("Ingrese el segundo número: ");
    scanf("%f", &e);
    if (e != 0) {
        printf("Resultado: %2.1f\n", x / e);
    } else {
        printf("Error: No se puede dividir por cero.\n");
    }
}

int main() {
    char opcion = '1';

    while (opcion != '0') {
        printf("\n- INICIO -\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("Seleccionaaa unaaaaa opción: ");
        scanf(" %c", &opcion);

        if (opcion == '1') {
            sumar();
        } else if (opcion == '2') {
            restar();
        } else if (opcion == '3') {
            multiplicar();
        } else if (opcion == '4') {
            dividir();
        } else if (opcion == '0') {
            printf(" Intente de nuevo.\n");
        }
    }
    return 0;
}