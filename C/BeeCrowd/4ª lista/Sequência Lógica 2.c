#include <stdio.h>

int main(){
    int X, Y;
    
    scanf("%d %d", &X, &Y);
    
    for(int i=1;i<=Y;i){
        for(int j=1;j<=X;j++){
            if(j==X){
                printf("%d\n", i);
            } else {
                printf("%d ", i);
            }
            i++;
        }
    }
    
    return 0;
}
