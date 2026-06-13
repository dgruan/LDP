#include <stdio.h>

int main(){
	int T, N[1000], a=0;
	scanf("%d",&T);
	
	for(int i=0;i<1000;i++){
		printf("N[%d] = %d\n",i,a);
		if(a==T-1){
			a=0;
		}else{
			a++;
		}
	}
	return 0;
}
