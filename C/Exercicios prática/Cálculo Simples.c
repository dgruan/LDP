#include <stdio.h>
 
int main() {
 
    int cod, quant;
    float val, valT;
    
    scanf("%d %d %f", &cod, &quant, &val);
    
    valT = quant * val;
    
    scanf("%d %d %f", &cod, &quant, &val);
    
    valT += quant * val;
    
    printf("VALOR A PAGAR: R$ %.2f\n", valT);
 
    return 0;
}
