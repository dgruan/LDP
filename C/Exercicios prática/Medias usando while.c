#include <stdio.h>

int main(){
	
	int n,cont=0, nota, media=0;
	
	printf("Digite a quantidade de notas que voce ira digitar: ");
	scanf("%d",&n);
	
	while(cont<n){
		scanf("%d",&nota);
		media = media + nota;
		cont++;
	}
	media = media / n;
	printf("A sua média eh: %d",media);
	
	return 0;
}
