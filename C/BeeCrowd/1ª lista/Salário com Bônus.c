#include <stdio.h>

int main() {
    char nome[99];
    double salario, vendas, valorReceber;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    valorReceber = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", valorReceber);

    return 0;
}
