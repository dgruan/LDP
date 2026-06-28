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

int verificarBloco(int tabuleiroSudoku[9][9], int linha, int coluna, int numero){
    int linhaInicio, colunaInicio;

    linhaInicio = (linha / 3) * 3;
    colunaInicio = (coluna / 3) * 3;

    if(linhaInicio >= 0 && linhaInicio <= 2){

    }
}

int verificarColuna(int tabuleiroSudoku[9][9], int coluna, int numero){ // nº igual
    for(int i=0;i<9;i++){
        if(tabuleiroSudoku[i][coluna] == numero){
            return 0;
        }
    }
return 1;
}

int verificarLinha(int tabuleiroSudoku[9][9], int linha, int numero){ // nº igual
    for(int i=0;i<9;i++){
        if(tabuleiroSudoku[linha][i] ==  numero){
            return 0;
        }
    }
return 1;
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

void progresso(int tabuleiroSudoku[9][9]){
    int casasVazias = 0, casasPreenchidas = 0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(tabuleiroSudoku[i][j] == 0){
                casasVazias++;
            }else{
                casasPreenchidas++;
            }
        }
    }
    printf("No tabuleiro, %d casas estao preenchidas.\n",casasPreenchidas);
    printf("Faltam %d casas.\n",casasVazias);
}

void estatisticasJogador(jogador player){

    printf("Nome do jogador: %s\n",player.nome);
    printf("Total de jogadas: %d\n",player.jogadas);
    printf("Total de erros do jogador: %d\n",player.erros);
}

void jogada(int tabuleiroSudoku[9][9], jogador *player){
    int linha, coluna, numeroJogada;

    do{
        printf("Linha: ");
        scanf("%d",&linha);

        printf("Coluna: ");
        scanf("%d",&coluna);

        if(linha < 0 || linha > 8 || coluna < 0 || coluna > 8){
            printf("Posicao invalida!\n");
        }
        else if(tabuleiroSudoku[linha][coluna] != 0){
            printf("Essa posicao ja esta preenchida!\n");
        }
    }while(linha < 0 || linha > 8 || coluna < 0 || coluna > 8 || tabuleiroSudoku[linha][coluna] != 0);

    do{
        printf("Numero que voce deseja inserir: ");
        scanf("%d",&numeroJogada);

        if(numeroJogada < 1 || numeroJogada > 9){
            printf("Numero invalido!\n");
            player->erros++;
        }
    }while(numeroJogada < 1 || numeroJogada > 9);

    tabuleiroSudoku[linha][coluna] = numeroJogada;
    player->jogadas++;
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
    printf("\n========== S U D O K U ===========\n");
    printf("1-Mostrar tabuleiro\n");
    printf("2-Fazer jogada\n");
    printf("3-Estatisticas\n");
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
        jogada(tabuleiro, &player);
        break;

        case 3:
        estatisticasJogador(player);
        break;

        case 4:
        progresso(tabuleiro);
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
