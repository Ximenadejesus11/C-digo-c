#include <stdio.h>  

int main() {   
    
    float HST,PH,salario;
    
    printf("Cuántas horas estuviste de esclavo:");
    scanf("%f", &HST);
    
    printf("cuanto ta pagan por hora wey:");
    scanf("%f", &PH);
    
    if (HST <= 40){
    salario =HST * PH;}
    else {
    salario = (40* PH) + (PH *1.5 *(HST-40));
    }
    
    printf("en esta semana te dieron nada más y nada menos que:%.2f\n",salario);
    return 0;

    }