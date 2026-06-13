#include <stdio.h>

int main(){
	int N, fatorial;
	
	scanf("%d",&N);
	
	for(fatorial=1;N>1;N--){
	fatorial = fatorial * N;
	}
	
	printf("%d\n",fatorial);
	return 0;
}
