#include <stdio.h>

void boas_vindas() {
	printf("==============================\n");
	printf("   Seja bem vindo ao caixa!   \n");
	printf("==============================");
}

// Função com ponteiro que atualiza o saldo e retorna o troco
float realizar_venda(float *saldo, float valor_item, float valor_pago) {
	float troco = 0;
	troco = valor_pago - valor_item;
	*saldo = *saldo + valor_item;
	return troco;
}
// Função de validação
int verificar_caixa(float saldo, float esperado) {
	if(saldo == esperado){
		return 1;
	}else{
		return 0;
	}
}

int main() {
 float total_troco_entregue = 0.0f;
 float saldo = 1000.00f;
 float valor_item = 0.20f;
 float valor_pago = 0.25f;
 float esperado = 2000.00f;
 float total_troco=0.0f;
 int i;
 
 boas_vindas();
 printf("\n");
 // Simulação das 5.000 vendas
 for(i=0;i<5000;i++) {
	total_troco += realizar_venda(&saldo, valor_item, valor_pago);
 }
 printf("Total de troco: %f\n", total_troco);
 printf("Saldo final: %f\n", saldo);
 printf("Saldo esperado: %f\n", esperado);

 if (verificar_caixa(saldo, esperado) == 1) {
 printf("Sucesso! O caixa bateu.\n");
 printf("==============================\n");
 } else {
 printf("ERRO! O caixa nao bateu.\n");
 printf("==============================\n");
 }
 return 0;
}
