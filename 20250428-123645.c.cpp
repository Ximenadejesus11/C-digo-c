#include <stdio.h>
#include <math.h>

double sp(double a, double b, double c) {
    return (a + b + c) / 2;
}

double area_triangulo(double a, double b, double c) {
    double p = sp(a, b, c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double a, b, c;
    
    printf("Escribe los lados del triángulo: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    printf("area del triangulo: %2.lf\n", area_triangulo(a, b, c));
    return 0;
}