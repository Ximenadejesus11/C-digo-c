#include <stdio.h>  

int main() {   
    
    int anio;
    int sala;
    int por;
    
    printf("Ingresa tu antigüedad");
       scanf("%d", &anio);
       
    if (anio >=5) {
    printf("Ingresa tu salario");
    scanf("%d", &sala);
    if((sala*100)/10 >1000){
    printf("Felicidades tu crédito Infonavit a sido aprobado");
    }
    }
    return 0;
    }