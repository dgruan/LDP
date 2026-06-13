#include <stdio.h>

int main(){

    int alterar;
    int linha, coluna, numero;
    int matriz[9][9] = {
    {5,3,0,0,7,0,0,0,0},
    {6,0,0,1,9,5,0,0,0},
    {0,9,8,0,0,0,0,6,0},
    {8,0,0,0,6,0,0,0,3},
    {4,0,0,8,0,3,0,0,1},
    {7,0,0,0,2,0,0,0,6},
    {0,6,0,0,0,0,2,8,0},
    {0,0,0,4,1,9,0,0,5},
    {0,0,0,0,8,0,0,7,9}
};
    for(int i=0;i<9;i++){
        printf("\n");
        for(int j=0;j<9;j++){
            printf("%d ",matriz[i][j]);
        }
    }
    do{
        printf("\nLinha: ");
        scanf("%d",&linha);
        printf("Coluna: ");
        scanf("%d",&coluna);
        printf("Numero que deseja inserir: ");
        scanf("%d",&numero);
        matriz[linha][coluna] = numero;
        for(int i=0;i<9;i++){
                printf("\n");
                for(int j=0;j<9;j++){
                    printf("%d ",matriz[i][j]);
                }
            }
        printf("\nDeseja alterar mais algum numero? 1 para sim, 0 para não: ");
        scanf("%d",&alterar);
    }while(alterar == 1);

    return 0;
}
