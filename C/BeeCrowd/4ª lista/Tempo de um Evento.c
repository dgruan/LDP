#include <stdio.h>

int main(){
    
    int dI, hI, mI, sI, totalInicial;
    int dF, hF, mF, sF, totalFinal;
    int dT, hT, mT, sT, duracaoTotal;
    
    scanf("Dia %d", &dI);
    scanf(" %d : %d : %d", &hI, &mI, &sI);
    scanf(" Dia %d", &dF);
    scanf(" %d : %d : %d", &hF, &mF, &sF);
    
    totalInicial = (dI*86400) + (hI*3600) + (mI*60) + sI;
    totalFinal = (dF*86400) + (hF*3600) + (mF*60) + sF;
    
    duracaoTotal = totalFinal - totalInicial;
    
    dT = duracaoTotal / 86400;
    duracaoTotal = duracaoTotal % 86400;
    
    hT = duracaoTotal / 3600;
    duracaoTotal = duracaoTotal % 3600;
    
    mT = duracaoTotal / 60;
    duracaoTotal = duracaoTotal % 60;
    
    sT = duracaoTotal;
    
    printf("%d dia(s)\n", dT);
    printf("%d hora(s)\n", hT);
    printf("%d minuto(s)\n", mT);
    printf("%d segundo(s)\n", sT);
    
    return 0;
}
