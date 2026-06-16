#include <stdio.h>
#include <math.h>

int main() {
 
 double a, b, c, triangulo, circulo;
 double trapezio, quadrado, retangulo;
 
 scanf("%lf %lf %lf", &a, &b, &c);
 
 triangulo = (a*c)/2;
 circulo = 3.14159*pow(c,2);
 trapezio = ((a+b)*c)/2;
 quadrado = pow(b,2);
 retangulo = a*b;
 
 printf("TRIANGULO: %.3lf",triangulo);
 printf("\nCIRCULO: %.3lf",circulo);
 printf("\nTRAPEZIO: %.3lf",trapezio);
 printf("\nQUADRADO: %.3lf",quadrado);
 printf("\nRETANGULO: %.3lf\n",retangulo);
    return 0;
}
