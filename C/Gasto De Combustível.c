#include <stdio.h>
 
int main() {
 
 int tempoViagem, velMedia;
 double lComb;
 
 scanf("%d %d",&tempoViagem, &velMedia);
 
 //lComb calcula a quantidade de combustivel que foi necessário para a viagem
 lComb = (tempoViagem*velMedia) / 12.0;
 
 printf("%.3lf\n",lComb);
    return 0;
}
