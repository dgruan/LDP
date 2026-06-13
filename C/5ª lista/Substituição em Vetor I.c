#include <stdio.h>

int main(){
	int x[10], y;
	
	for(int i=0;i<10;i++){
		scanf("%d",&y);
		if(y==0 || y<0){
			y=1;
		}
		x[i] = y;
	}
	for(int i=0;i<10;i++){
		printf("X[%d] = %d\n",i,x[i]);
	}
	return 0;
}
