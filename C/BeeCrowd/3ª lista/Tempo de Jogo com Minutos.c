#include <stdio.h>

int main() {

    int hIni, mIni, hFim, mFim;
    int segIni, segFim, duracao;
    int duracaoH, duracaoMin;

    scanf("%d %d %d %d", &hIni, &mIni, &hFim, &mFim);

    segIni = (hIni * 3600) + (mIni * 60);
    segFim = (hFim * 3600) + (mFim * 60);

    if (segFim <= segIni) {
        segFim += 24 * 3600;
    }

    duracao = segFim - segIni;

    duracaoH = duracao / 3600;
    duracaoMin = (duracao % 3600) / 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoH, duracaoMin);

    return 0;
}
