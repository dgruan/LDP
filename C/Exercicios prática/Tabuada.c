#include <stdio.h>

int main(){
	
	int A,B,aux,mult;
	
	scanf("%d %d",&A, &B);
	
	if(A>B){
	aux=A;
	A=B;
	B=aux;
		
	}
	for(int i=A;i<=B;i++){
		for(int j=1;j<=10;j++){
			mult = i*j;
			printf("%dx%d= %d\n",i,j,mult);
		}
	}
	return 0;
}
