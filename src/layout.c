#include "layout.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CONTINUAR 1
#define VOLTAR 0

    void clearScreen(){
        printf("\033[H\033[J");
    }

//-----voltar para menu-----------
    int backMenuOrAddNewContact(){
        int bm;
        printf("................\nVoltar para OPÇÕES---------[1]\nCadastrar outro Contato----[0]\n................\n");
        scanf("%d", &bm);
        clearScreen();
        return bm;
    }

    int backMenu(){
        int bm;
        printf("................\nVoltar para OPÇÕES---------[1]\n");
        scanf("%d", &bm);
        clearScreen();
        return bm;
    }

    int backMenuOrSearchAgain(){
        int bm;
        printf("................\nVoltar para OPÇÕES---------[1]\nProcurar novamente-------[0]\n................\n");
        scanf("%d", &bm);
        clearScreen();
        return bm;
    }

//-------------------------------
    void title(){
        printf("..........................\n   AGENDA DE CONTATOS\n..........................\n");
    }

    void options(){
        printf("\n       OPÇÕES:\n\nCadastrar Contato-------[1]\n\nExibir Lista de Contato [2]\n\n");
        printf("Procurar Um Contato-----[3]\n\nEditar Contato----------[4]\n\nExcluir Contato---------[5]\n\nSAIR DA AGENDA----------[0]\n");
        printf("....................................\n");
    }
    
    void initialScreen(){
        title();
        options();
    }

    void optionsScreen(){
        title();
        options();
    }

    void addContactScreen(){
        clearScreen();
        title();
        printf("Cadastrar Novo Contato\n.......................\n");
    }   

    void mainScreen(){
        clearScreen();
        title();
        options();
    }

    void showAllContactsScreen(){
        clearScreen();
        title();
        printf("LISTA DE CONTATOS\n..................................\n");
    }

    void searchContactScreen(){
        clearScreen();
        printf("Procurar Contato\n------------------\nDigite o nome do CONTATO: ");
    }
//----------------------------------------

    //essa função não pertence aqui, mudar ela!!!
    char** getInfoContact(){ //entender essa função!!!
        char** arr = malloc(3 * sizeof(char*));

        // Alocando memória para as strings
        arr[0] = malloc(50 * sizeof(char));  // para o nome
        arr[1] = malloc(12 * sizeof(char));  // para o telefone
        arr[2] = malloc(50 * sizeof(char));  // para o e-mail

        printf("Nome: ");
        scanf("%s", arr[0]);

        printf("Telefone: ");
        scanf("%s", arr[1]);

        printf("E-mail: ");
        scanf("%s", arr[2]);

        return arr;
    }