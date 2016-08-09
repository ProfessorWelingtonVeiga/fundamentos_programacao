#include <stdio.h>
#include <stdlib.h>

/**
* 1. O volume de uma determinada substância em um equipamento deve estar entre 50 e 150 ml.
* Escreva um programa que leia o volume atual e retorne uma mensagem caso o volume esteja fora do intervalo aceitável.
*/

int main()
{
    int volume;
    printf("Digite o volume:\n");
    scanf("%d", &volume);

    if (volume < 50 || volume > 150) {
        printf("ATENÇÃO: Volume fora do intervalo aceitável.");
    } else {
        printf("Volume normal.");
    }

    return 0;
}
