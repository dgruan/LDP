#include <stdio.h>
 
int main() {
 
    int anos, meses, dias;
    
    scanf("%d",&dias);
    
    anos = dias/365;
    dias = dias%365; //guarda os dias que sobraram após calcular os anos
    
    meses = dias/30;
    dias = dias%30; //guarda os dias que sobraram após calcular os meses
    
    printf("%d ano(s)",anos);
    printf("\n%d mes(es)",meses);
    printf("\n%d dia(s)\n",dias);
    return 0;
}
