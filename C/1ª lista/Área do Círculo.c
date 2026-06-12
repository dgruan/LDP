#include <stdio.h>
 
int main() {
 
double raio, area, x;
x=3.14159;
scanf("%lf", &raio);
raio  = raio * raio;
area = x * raio;

printf("A=%.4lf\n", area);
    return 0;
}
