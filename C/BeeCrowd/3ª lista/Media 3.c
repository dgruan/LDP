#include <stdio.h>
 
int main() {
    
    double n1, n2, n3, n4, media, notaExame, mediaFinal;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    media = (n1*2.0 + n2*3.0 + n3*4.0 + n4*1.0) / (2.0+3.0+4.0+1.0);
    printf("Media: %.1lf\n",media);
    
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(media<5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%lf",&notaExame);
        printf("Nota do exame: %.1lf\n",notaExame);
        
        mediaFinal=(notaExame+media)/2;
        
        if(mediaFinal>=5.0){
        printf("Aluno aprovado.\n");
    }else{
        printf("Aluno reprovado.\n");
    }
     printf("Media final: %.1lf\n",mediaFinal);
    }
    return 0;
}
