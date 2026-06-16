#include <stdio.h>
 
int main() {
 
 int X, Y, soma=0;

 scanf("%d %d",&X, &Y);
 if(X>Y){
    for(int i=X-1;i>Y;i--){
        if(i%2!=0){
            soma = soma + i;
        }
    }
 }
 else{
    for(int i=X+1;i<Y;i++){
        if(i%2!=0){
            soma = soma + i;
        }
    }
 }
 printf("%d\n",soma);
    return 0;
}
