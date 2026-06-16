#include <stdio.h>
#include <string.h> 

int main(){
    char senha[6] = "senha";
    char tentativaSenha[6];
    int tentativas = 5;

    do{
        printf("Digite a senha: ");
        scanf("%s",tentativaSenha);

        for(int i=0;i<strlen(senha);i++){
            if(tentativaSenha[i] == senha[i]){
                printf("%c",tentativaSenha[i]);
            }else{
                printf("_");
        }
        
    }
    tentativas--;
    printf("\nVoce possui %d tentativas!\n",tentativas);
    }while(tentativas>0);
    
    return 0;
}
