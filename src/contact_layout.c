
#include "contact_layout.h"
#include "contact.h"
#include "layout.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define VOLTAR 0
#define CONTINUAR 1
#define TRUE 1
#define FALSE 0

char** contactInfo;
 int nextScreen;

int selectOption(Options opt) {
    switch (opt) {
        case NEW_CONTACT:
            addContactScreen();//tela de adicionar contatos

            char** contactInfo = getInfoContact();//pega informação do terminal e salva na variavel um  array com as informações
            int savedContact = addNewContact(contactInfo[0], contactInfo[1], contactInfo[2]);//passando cada valor de cada indice nos parametros da função que adiciona contatos no array agenda
            

            if(savedContact == 0){// verifica se salvou
                printf("+++++++++++++++++\nSalvo!\n+++++++++++++++++\n");
            }else if (savedContact == 1){
                printf("+++++++++++++++++\nErro ao Salvar!\n+++++++++++++++++\n");
            }


            //retorna a opção selecionada pelo usuario no final de cadastramento
            nextScreen = backMenuOrAddNewContact();

            return nextScreen;
            break;
        case SHOW_ALL_CONTACT:
            showAllContactsScreen();

            showAllContacts();

            nextScreen = backMenu();
            return nextScreen;
            break;
        case SEARCH_CONTACT:
            char name[50];
            searchContactScreen();
            scanf("%s", name);
            searchContact(name);
            nextScreen = backMenuOrSearchAgain();
            return nextScreen;
            break;
        case EDIT_CONTACT:
            printf("Editar Contato\n");
            return EDIT_CONTACT;
            break;
        case DEL_CONTACT:
            printf("Excluir Contato\n");
            return DEL_CONTACT;
            break;
        case EXIT_PROGRAM:
            printf("Sair da Agenda\n");
            return EXIT_PROGRAM;
            break;
        default:
            printf("Valor desconhecido\n");
            return 0;
            break;
    }
}