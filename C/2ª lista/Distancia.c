#include <stdio.h>
 
int main() {
 
    int distancia, tempo;
    
    //1 km a cada 2 minutos
    scanf("%d", &distancia);
    
    tempo = distancia * 2;
    
    printf("%d minutos\n",tempo);
    return 0;
}
