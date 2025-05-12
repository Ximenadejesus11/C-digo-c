
#include <stdio.h>

int main() {
    int N, suma = 0;
    
    printf("Ingrese un número: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    printf("Suma: ");
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf("+");
        }
    }
    printf("=%d\n", suma);
    
    return 0;
}