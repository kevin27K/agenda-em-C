#include "contact.h"
#include "layout.h"
#include "contact_layout.h"
#include "search_engine.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(){
    char nome[20];  // Assume que o nome tem no máximo 19 caracteres + o caractere nulo
    
    strcpy(agenda[0].nome, "maria julia");
    strcpy(agenda[1].nome, "maria luiza");
    strcpy(agenda[2].nome, "maria isabel");
    strcpy(agenda[3].nome, "kevin menezes");
    strcpy(agenda[4].nome, "ethan mol");
    strcpy(agenda[5].nome, "ticia girl");
    strcpy(agenda[6].nome, "ko koy");
    strcpy(agenda[7].nome, "bel babel");
    strcpy(agenda[8].nome, "maria julia");
    strcpy(agenda[9].nome, "maria julya");
    
    strcpy(nome, "maria julia");

    searchContact();

    return 0;
}