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

int menu(){

    int opc;
    printf("========== S U D O K U ==========\n");
    printf("1-Mostrar tabuleiro");
    printf("2-Fazer jogada\n");
    printf("3-Verificar progresso\n");
    printf("4-Estatisticas");
    printf("5-Reiniciar partida\n");
    printf("6-Reiniciar\n");
    printf("7-Ajuda\n");
    printf("8-Sair\n");
    printf("===============================\n==");
    printf("Digite a opcao desejada: \n");
    scanf("%d",&opc);
    return opc;
}
int main(){

    int opcao;
    return 0;
}
