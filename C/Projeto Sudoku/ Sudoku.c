#include <stdio.h>

/* lista de funcoes: menu, para apresentar as opcoes e retornar a escolha do usuario
mostrarTabuleiro, imprimir a matriz 9x9
inicializarTabuleiro, carregar o sudoku inicial com alguns preenchidos e outros vazios
fazerJogada, que vai pedir a linha, a coluna, e o número da jogada
verificarLinha, que verifica se o numero já existe naquela linha
verificarColuna, que verifica se o numero ja existe naquela coluna
verificarBloco, que verifica se o bloco 3x3
jogadaValida, que verifica a linha, a coluna e o bloco
verificarVitoria, que verifica se ainda tem posicoes vazias
reiniciarJogo, que volta ao estado inicial
jogador, que mostra dados do jogador */

int jogador(){
    struct jogador{
        char nome[100];
        int jogadas;
        int erros;
    };
    return jogador;
}

int sairJogo(){

}

void ajuda(){

}

int reiniciar(){

}

int verificarVitoria(){

}

int jogadaValida(){

}

int verificarBloco(){

}

int verificarColuna(){

}

int verificarLinha(){

}

int jogada(){

}

mostrarTabuleiro(){
    int tabuleiro[9][9] = {
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
        if(i==3 || i==6){
            printf("\n---------------------\n");
        }else{
            printf("\n");
        }
        for(int j=0;j<9;j++){
            if(j == 2 || j == 5){
                printf("%d | ",tabuleiro[i][j]);
            }else{
                printf("%d ",tabuleiro[i][j]);
            }
        }
    }
}

void menu(){
    printf("========== S U D O K U ==========\n");
    printf("1-Mostrar tabuleiro");
    printf("2-Fazer jogada\n");
    printf("3-Verificar progresso\n");
    printf("4-Estatisticas");
    printf("5-Reiniciar \n");
    printf("6-Ajuda\n");
    printf("7-Sair\n");
    printf("===============================\n==");
    printf("Digite a opcao desejada: ");
}

int main(){

    int opcao;
    menu();
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
        mostrarTabuleiro();
        break;
        
        case 2:
        jogada();
        break;

        case 3:

        break;

        case 4:
        jogador();
        break;

        case 5:
        reiniciar();
        break;

        case 6:
        ajuda();
        break;

        case 7:
        sairJogo();
        break;
    }
    return 0;
}
