#include <stdio.h>

float divisao(float n1, float n2){
    float resultado;
    resultado = n1/n2;
    return resultado;
}
float multiplicacao(float n1, float n2){
    float resultado;
    resultado = n1*n2;
    return resultado;
}

float subtracao(float n1, float n2){
    float resultado;
    resultado = n1-n2;
    return resultado;
}

float soma(float n1, float n2){
    float resultado;
    resultado = n1+n2;
    return resultado;
}

void apresentacao(){
    printf("===============================\n");
    printf("Selecione a opcao desejada:\n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    printf("===============================\n");
}

int main(){

    float x,y,resultado;
    int opcao;

    apresentacao();
    scanf("%d",&opcao);

    printf("Digite o primeiro valor: ");
    scanf("%f",&x);
    printf("Digite o segundo valor: ");
    scanf("%f",&y);

    switch(opcao){
        case 1:
        resultado = soma(x,y);
        printf("O resultado da soma entre %.2f e %.2f é: %.2f",x, y, resultado);
        break;

        case 2:
        resultado = subtracao(x,y);
        printf("O resultado da subtracao entre %.2f e %.2f é: %.2f",x, y, resultado);
        break;

        case 3:
        resultado = multiplicacao(x,y);
        printf("O resultado da multiplicacao entre %.2f e %.2f é: %.2f",x, y, resultado);
        break;

        case 4:
        resultado = divisao(x,y);
        printf("O resultado da divisao entre %.2f e %.2f é: %.2f",x, y, resultado);
        break;

        default:
        printf("Opcao inválida!");
        break;
    }
    return 0;
}
