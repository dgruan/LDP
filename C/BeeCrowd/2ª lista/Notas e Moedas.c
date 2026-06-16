#include <stdio.h>
 
int main() {
 
    double valor;
    int n100, n50, n20, n10, n5, n2, resto;
    int m1, m50, m25, m10, m05, m01, centavos;
    
    scanf("%lf",&valor);
    
    //variavel centavos usada para converter valor para inteiro:
    centavos = valor * 100;
    
    //calcula a parte das notas:
    n100 = centavos / 10000; //100 reais é equivalente a 10000 centavos.
    centavos %= 10000;
    n50 = centavos / 5000;
    centavos %= 5000;
    n20 = centavos / 2000;
    centavos %= 2000;
    n10 = centavos / 1000;
    centavos %= 1000;
    n5 = centavos / 500;
    centavos %= 500;
    n2 = centavos / 200;
    centavos %= 200;
    
    //calcula a parte das moedas:
    m1 = centavos / 100; //dividido por 100 porque 1 real é equivalente a 100 centavos.
    centavos %= 100;
    m50 = centavos / 50;
    centavos %= 50;
    m25 = centavos / 25;
    centavos %= 25;
    m10 = centavos / 10;
    centavos %= 10;
    m05 = centavos / 5;
    centavos %= 5;
    m01 = centavos;
 
    printf("NOTAS:");
    printf("\n%d nota(s) de R$ 100.00",n100);
    printf("\n%d nota(s) de R$ 50.00",n50);
    printf("\n%d nota(s) de R$ 20.00",n20);
    printf("\n%d nota(s) de R$ 10.00",n10);
    printf("\n%d nota(s) de R$ 5.00",n5);
    printf("\n%d nota(s) de R$ 2.00",n2);
    printf("\nMOEDAS:");
    printf("\n%d moeda(s) de R$ 1.00",m1);
    printf("\n%d moeda(s) de R$ 0.50",m50);
    printf("\n%d moeda(s) de R$ 0.25",m25);
    printf("\n%d moeda(s) de R$ 0.10",m10);
    printf("\n%d moeda(s) de R$ 0.05",m05);
    printf("\n%d moeda(s) de R$ 0.01\n",m01);
    
    return 0;
}
