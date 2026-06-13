#include <stdio.h>

int main(){
	int x,y,z;
	
	scanf("%d %d",&x,&y);
	
	if(x>y){
		z=x;
	}
	else{
		z=y;
	}
	printf("O maior eh: %d",z);
	
	return 0;
}
