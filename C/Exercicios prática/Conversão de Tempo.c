#include <stdio.h>
 
int main() {
 
 int segundos, minutos, horas;
 
 scanf("%d",&segundos);
 
 minutos = segundos / 60;
 segundos = segundos % 60; //guarda os segundos que sobraram depois da divisão dos minutos
 
 horas = minutos / 60;
 minutos = minutos % 60; //guarda os minutos restantes depois de obter as horas
 
 printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}
