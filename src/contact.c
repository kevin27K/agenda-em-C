#include "contact.h"
#include "layout.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Contato agenda[MAX_CONTATOS];
int totalContatos = 0;

int addNewContact(const char *nome, const char *telefone, const char *email){

    if (totalContatos < MAX_CONTATOS) {  // Verifica se ainda há espaço no array
        strcpy(agenda[totalContatos].nome, nome);
        strcpy(agenda[totalContatos].telefone, telefone);
        strcpy(agenda[totalContatos].email, email);
        
        totalContatos++;  // Incrementa o total de contatos
        return 1;
    }else{
        return 0;
    }
}

void showAllContacts(){
    for (int i = 0; i < totalContatos; i++){
        printf("Nome %s\n", agenda[i].nome);
        printf("Telefone %s\n", agenda[i].telefone);
        printf("E-mail %s\n", agenda[i].email);
        printf(".............................\n");
    }
}

void searchContact(char name[50]){
    printf("Procurando por %s\n", name);
}