#include <stdio.h>
 
int main() {
 
 double X, N[100];
 
 scanf("%lf",&X);
 for(int i=0;i<100;i++){
 	N[i] = X;
 	X = X/2;
 	printf("N[%d] = %.4lf\n",i,N[i]);
 }
    return 0;
}
