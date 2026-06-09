#include <stdio.h>
#include <math.h>

void boas_vindas() {
    printf("==============================\n");
    printf("   Seja bem vindo ao caixa!   \n");
    printf("==============================\n");
}

// Função com ponteiro que atualiza o saldo e retorna o troco
float realizar_venda(float *saldo, float valor_item, float valor_pago) {
    float troco = valor_pago - valor_item;
    *saldo += valor_item;
    return troco;
}

// Função de validação
int verificar_caixa(float saldo, float esperado) {
    return fabs(saldo - esperado) < 0.001;
}

int main() {
    float saldo = 1000.00f;
    float valor_item = 0.20f;
    float valor_pago = 0.25f;
    float esperado = 2000.00f;
    float total_troco = 0.0f;

    boas_vindas();

    // Simulação das 5.000 vendas
    for (int i = 0; i < 5000; i++) {
        total_troco += realizar_venda(&saldo, valor_item, valor_pago);
    }

    printf("Total de troco: %.2f\n", total_troco);
    printf("Saldo final: %.2f\n", saldo);
    printf("Saldo esperado: %.2f\n", esperado);

    if (verificar_caixa(saldo, esperado)) {
        printf("Sucesso! O caixa bateu.\n");
    } else {
        printf("ERRO! O caixa nao bateu.\n");
    }

    printf("==============================\n");

    return 0;
}
