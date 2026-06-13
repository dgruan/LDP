#include <stdio.h>

int main(){
	float val, soma;
	int contagem;
	
	soma = 0;
	
	contagem = 1;
	
	while(contagem<=5){
		printf("\nDigite o %d numero: ",contagem);
		scanf("%f",&val);
		soma=soma+val;
		contagem++;
		
	}
	printf("\nO resultado da soma eh: %.2f",soma);
	return 0;
}
