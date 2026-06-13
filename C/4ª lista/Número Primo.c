#include <stdio.h>

int main(){
    
    int N, X;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &X);

        int primo = 1;
        
        for(int j = 2; j < X; j++){
            if(X % j == 0){
                primo = 0;
                break;
            }
        }

        if(primo == 1){
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}
