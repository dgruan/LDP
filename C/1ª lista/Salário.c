#include <stdio.h>
 
int main() {
 
  int num, hrs;
  double valorhr, salario;
  
  scanf("%d %d", &num, &hrs);
  scanf("%lf", &valorhr);
  
  salario = hrs * valorhr;
  
  printf("NUMBER = %d",num);
  printf("\nSALARY = U$ %.2lf\n",salario);
    return 0;
}
