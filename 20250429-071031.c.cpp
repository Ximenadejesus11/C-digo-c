#include <stdio.h>

int maximo(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}
int main() {
  int numero1 = 10;
  int numero2 = 15;
  int resultado = maximo(numero1, numero2);
  printf("El máximo entre %d , %d es: %d\n", numero1, numero2, resultado);
  return 0;
}