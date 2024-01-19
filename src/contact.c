#include "contact.h"
#include "layout.h"
#include "uuid.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Contact agenda[MAX_CONTATOS];
int totalContatos = 0;

void initializeContact(Contact *contact){
    generateUUID(contact->uuid);
}


int addNewContact(const char *nome, const char *telefone, const char *email){

    if (totalContatos < MAX_CONTATOS) {  // Verifica se ainda há espaço no array
        strcpy(agenda[totalContatos].nome, nome);
        strcpy(agenda[totalContatos].telefone, telefone);
        strcpy(agenda[totalContatos].email, email);
        initializeContact(&agenda[totalContatos]);
        totalContatos++;  // Incrementa o total de contatos
        return 0;
    }else{
        return 1;
    }
}

void showAllContacts(){
    for (int i = 0; i < totalContatos; i++){
        printf("Nome %s\n", agenda[i].nome);
        printf("Telefone %s\n", agenda[i].telefone);
        printf("E-mail %s\n", agenda[i].email);
        //printf("UUID: %s\n", agenda[i].uuid);
        printf(".............................\n");
    }
}

void searchContact(char name[50]){
    printf("Procurando por %s\n", name);
    //criar um array para guardar os contatos que tenha o mesmo nome digitado
    //e exibir esses nomes todos tem que fazer referencia a posição em que eles se encontram
    //no array de onde se origina com base em um id que terei que implementar
    //
}