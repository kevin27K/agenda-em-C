#include "uuid.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Implementação da função que gera UUID
void generateUUID(char *uuid) {
    char caracteres[] = "0123456789abcdef";
    int i;

    // Inicializar o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    for (i = 0; i < 32; i++) {
        if (i == 8 || i == 12 || i == 16 || i == 20) {
            uuid[i] = '-';
        } else {
            uuid[i] = caracteres[rand() % 16];
        }
    }
    uuid[32] = '\0';  // Terminar a string
}
