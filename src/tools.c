#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void toReadString(char *destino, int tamanho) {
    // Ler a string
    fgets(destino, tamanho, stdin);

    // Remover o caractere de nova linha (\n) se estiver presente
    int len = strlen(destino);  
    if (len > 0 && destino[len - 1] == '\n') {
        destino[len - 1] = '\0';
    }
}