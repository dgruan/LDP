#include <stdio.h>
 
int main() {
 
 int codigo, qntd;
 double valor;
 
 scanf("%d %d",&codigo, &qntd);
 
 if(codigo==1){
     valor = qntd * 4.00;
     printf("Total: R$ %.2lf\n",valor);
 }
 if(codigo==2){
     valor = qntd * 4.50;
     printf("Total: R$ %.2lf\n",valor);
 }
 if(codigo==3){
     valor = qntd * 5.00;
     printf("Total: R$ %.2lf\n",valor);
 }
 if(codigo==4){
     valor = qntd * 2.00;
     printf("Total: R$ %.2lf\n",valor);
 }
 if(codigo==5){
     valor = qntd * 1.50;
     printf("Total: R$ %.2lf\n",valor);
 }
    return 0;
}
