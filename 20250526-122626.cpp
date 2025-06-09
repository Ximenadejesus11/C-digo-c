
#include <stdio.h>
#include <time.h>

int ciclo() {
    int suma = 0;
    for (int i = 0; i < 1000000; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    clock_t z1, z2;
    int ciclos;
    z1 = clock();        
    int resultado = ciclo();
    z2 = clock();        
    ciclos = (int)(z2 - z1); // ciclos usados
    
    printf("Resultado: %d\n", resultado);
    printf("Ciclos de reloj: %d\n", ciclos);
    return 0;
}