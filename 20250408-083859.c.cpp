#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100], palabra3[100];

    printf("Palabra 1: "); 
    scanf("%s", palabra1);
    printf("Palabra 2: "); 
    scanf("%s", palabra2);

    printf("\nAntes:\nPalabra_1 = '%s'\nPalabra_2 = '%s'\n", palabra1, palabra2);

    strcpy(palabra3, palabra1);
    strcpy(palabra1, palabra2); 
    strcpy(palabra2, palabra3);

    printf("\nDespués:\nPalabra_1 = '%s'\nPalabra_2 = '%s'\n", palabra1, palabra2);
    return 0;
}