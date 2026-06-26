#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    int jogadas;
    int erros;
}jogador;

int verificarVitoria(){

}

int jogadaValida(){

}

int verificarBloco(){

}

int verificarColuna(int tabuleiro[9][9){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            
        }
    }
}

int verificarLinha(){

}

void sairJogo(){
    printf("Saindo...");
}

void ajuda(){
    printf("Não repetir números na linha.\n");
    printf("Não repetir números na coluna.\n");
    printf("Não repetir números no bloco 3x3.\n");
    printf("Complete todos os espaços para vencer.\n");
}

void reiniciar(int tabuleiro[9][9], int tabuleiroInicial[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            tabuleiro[i][j] = tabuleiroInicial[i][j];
        }
    }
    printf("O tabuleiro foi reiniciado!");
}

int progresso(int tabuleiroSudoku[9][9]){
    
}

void estatisticasJogador(jogador player){

    printf("Nome do jogador: %s",player.nome);
    printf("Total de jogadas: %d",player.jogadas);
    printf("Total de erros do jogador: %d",player.erros);
}

void jogada(int tabuleiroSudoku[9][9]){
    int linha, coluna, numeroJogada;
    printf("Linha: ");
    scanf("%d",&linha);
    printf("Coluna: ");
    scanf("%d",&coluna);
    printf("Numero que voce deseja inserir: ");
    scanf("%d",&numeroJogada);
    tabuleiroSudoku[linha][coluna] = numeroJogada;
    
}

void mostrarTabuleiro(int tabuleiroSudoku[9][9]){
    for(int i=0;i<9;i++){
        if(i==3 || i==6){
            printf("\n---------------------\n");
        }else{
            printf("\n");
        }
        for(int j=0;j<9;j++){
            if(j == 2 || j == 5){
                printf("%d | ",tabuleiroSudoku[i][j]);
            }else{
                printf("%d ",tabuleiroSudoku[i][j]);
            }
        }
    }
}

void menu(){
    printf("========== S U D O K U ===========\n");
    printf("1-Mostrar tabuleiro\n");
    printf("2-Fazer jogada\n");
    printf("3-Estatisticas");
    printf("4-Progresso\n");
    printf("5-Reiniciar \n");
    printf("6-Ajuda\n");
    printf("7-Sair\n");
    printf("==================================\n");
    printf("Digite a opcao desejada: ");
}

int main(){

    int opcao, tabuleiroInicial[9][9];
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
    
     //copiar tabuleiro p/ reiniciar
     for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            tabuleiroInicial[i][j] = tabuleiro[i][j];
        }
    }
    
    jogador player;
    char nomeJogador[100];

    printf("Digite o seu nome: ");
    scanf("%s",nomeJogador);
    strcpy(player.nome, nomeJogador);
    player.jogadas = 0;
    player.erros = 0;
    
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
        case 1:
        mostrarTabuleiro(tabuleiro);
        break;
        
        case 2:
        jogada();
        break;

        case 3:
        estatisticasJogador(player);
        break;

        case 4:
        progresso();
        break;

        case 5:
        reiniciar(tabuleiro, tabuleiroInicial);
        break;

        case 6:
        ajuda();
        break;

        case 7:
        sairJogo();
        break;

        default:
        printf("Opcao invalida!\n");
    }
    }while(opcao != 7);

    return 0;
}
