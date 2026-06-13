#include <stdio.h>

int main(){

    int maior=-9999, posicao, n;

    for(int i=1;i<=100;i++){
        scanf("%d",&n);
        if(n>maior){
            maior = n;
            posicao = i;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",posicao);
    return 0;
}
