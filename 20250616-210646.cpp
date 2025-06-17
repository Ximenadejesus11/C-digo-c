#include <stdio.h>
#include <time.h>

// Opción 1: Tabla sin apuntadores + tiempo
void tablaSinApuntadores() {
    int i, j;
    clock_t inicio, fin;
    inicio = clock();

    printf("\nTabla de multiplicar (sin apuntadores):\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    fin = clock();
    float tiempo = (float)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %.6f segundos\n", tiempo);
}

// Opción 2: Tabla con apuntadores + tiempo
void tablaConApuntadores() {
    int tabla[10][10];
    int *p = &tabla[0][0];
    int i;

    clock_t inicio, fin;
    inicio = clock();

    printf("\nTabla de multiplicar (con apuntadores):\n");
    for (i = 0; i < 100; i++) {
        *(p + i) = ((i / 10) + 1) * ((i % 10) + 1);
    }

    for (i = 0; i < 100; i++) {
        printf("%4d", *(p + i));
        if ((i + 1) % 10 == 0)
            printf("\n");
    }

    fin = clock();
    float tiempo = (float)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %.6f segundos\n", tiempo);
}

// Opción 3: Sistema POS básico
void sistemaPOS() {
    char nombres[5][30];
    float precios[5];
    int cantidades[5];
    int n = 0;
    int i;
    float total = 0;

    while (n < 1 || n > 5) {
        printf("¿Cuántos productos desea ingresar? (1 a 5): ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        printf("\nProducto %d:\n", i + 1);
        printf("Nombre: ");
        scanf(" %[^\n]", nombres[i]);
        printf("Precio: ");
        scanf("%f", &precios[i]);
        printf("Cantidad: ");
        scanf("%d", &cantidades[i]);
        total = total + (precios[i] * cantidades[i]);
    }

    printf("\n--- TICKET DE COMPRA ---\n");
    for (i = 0; i < n; i++) {
        printf("%s x%d = $%.2f\n", nombres[i], cantidades[i], precios[i] * cantidades[i]);
    }
    printf("TOTAL: $%.2f\n", total);
}

// Menú principal
int main() {
    int opcion = -1;

    while (opcion != 0) {
        printf("\n=== MENÚ ===\n");
        printf("1. Tabla sin apuntadores (con tiempo)\n");
        printf("2. Tabla con apuntadores (con tiempo)\n");
        printf("3. Sistema POS\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            tablaSinApuntadores();
        } else if (opcion == 2) {
            tablaConApuntadores();
        } else if (opcion == 3) {
            sistemaPOS();
        } else if (opcion != 0) {
            printf("Opción inválida.\n");
        }
    }

    return 0;
}