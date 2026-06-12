#include <stdio.h>
 
int main() {
 
 int horaInicio, horaFim, duracao;
 
 scanf("%d %d",&horaInicio, &horaFim);
 
 if(horaInicio>horaFim||horaInicio==horaFim){
     duracao = (24-horaInicio)+horaFim;
     printf("O JOGO DUROU %d HORA(S)\n",duracao);
 }
 else{
     duracao = horaFim - horaInicio;
     printf("O JOGO DUROU %d HORA(S)\n",duracao);
 }
    return 0;
}
