#include <stdio.h>

int main(){

    int matriz[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("\nDigite um valor para inserir na linha %d, coluna %d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for(int i=0;i<9;i++){
        printf("\n");
        for(int j=0;j<9;j++){
            printf("%d ",matriz[i][j]);
        }
    }
    printf("%d",matriz);
    return 0;
}
