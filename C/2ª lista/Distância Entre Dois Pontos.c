#include <stdio.h>
#include <math.h>

int main() {
 
double x1, x2, y1, y2, distancia, distanciaFinal;

scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

distancia = (pow((x2 - x1),2) + pow((y2 - y1),2));
distanciaFinal = sqrt(distancia);

printf("%.4lf\n",distanciaFinal);
    return 0;
}
