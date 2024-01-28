#include "contact.h"
#include "layout.h"
#include "contact_layout.h"
#include "search_engine.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int main(){
    strcpy(agenda[0].nome, "maria julia");
    strcpy(agenda[1].nome, "maria");
    strcpy(agenda[2].nome, "maria isabel");
    strcpy(agenda[3].nome, "kevin menezes");
    strcpy(agenda[4].nome, "ethan mol");
    strcpy(agenda[5].nome, "ticia girl");
    strcpy(agenda[6].nome, "ko koy");
    strcpy(agenda[7].nome, "bel babel");
    strcpy(agenda[8].nome, "maria julia");
    strcpy(agenda[9].nome, "maria julya");


    int opt;
    //int teste;
   
    initialScreen();
    scanf("%d", &opt);
    do{
        
        int nextScreen = selectOption(opt);
        //printf("valor de opt antes do switch %d\n", opt);
        //printf("Valor do NEXTSCREEN antes do Switch %d\n", nextScreen);
        
        switch (opt) {
            case 1:

                //loadContact();

                //troca de tela
                if(nextScreen == TRUE){
                    initialScreen();
                    scanf("%d", &opt);
                    break;
                }else if(nextScreen == FALSE){
                    addContactScreen();
                    opt = 1;
                }
                break;
            case 2:
                //troca de tela
                if(nextScreen == TRUE){
                    initialScreen();
                    scanf("%d", &opt);
                    break;
                }    
                break;
            case 3:
            //troca de tela
                if(nextScreen == TRUE){
                    initialScreen();
                    scanf("%d", &opt);
                    break;
                }else if(nextScreen == FALSE){
                    searchContactScreen();
                    opt = 3;
                    break;
                }
                break;        
            default:
                printf("Valor desconhecido\n");
                return 0;
            break;
        }
    } while (opt != 0);


    /*
    
    int opt;
    //int teste;
   
    initialScreen();
    scanf("%d", &opt);
    do{
        
        int nextScreen = selectOption(opt);
        printf("valor de opt antes do switch %d\n", opt);
        printf("Valor do NEXTSCREEN antes do Switch %d\n", nextScreen);
        
        switch (opt) {
            case 1:

                loadContact();

                //troca de tela
                if(nextScreen == TRUE){
                    initialScreen();
                    scanf("%d", &opt);
                    break;
                }else if(nextScreen == FALSE){
                    addContactScreen();
                    opt = 1;
                }
                break;
            case 2:
                //troca de tela
                if(nextScreen == TRUE){
                    initialScreen();
                    scanf("%d", &opt);
                    break;
                }    
                break;
            case 3:
                if(nextScreen == TRUE){
                    initialScreen();
                    scanf("%d", &opt);
                    break;
                }else if(nextScreen == FALSE){
                    searchContactScreen();
                    opt = 3;
                    break;
                }
                break;        
            default:
                printf("Valor desconhecido\n");
                return 0;
            break;
        }
    } while (opt != 0);
    
    */
    
    return 0;
}

/*
    int opt;
    initialScreen();

    do{
        
        scanf("%d", &opt);
        clearScreen();
        int re = selectOption(opt);

        if(opt == 1 && re == 0){
            initialScreen();
        }else if(opt == 2 && re == 0){
            mainScreen();
        }else if(opt == 2 && re == 1){
            newContactScreen();
        }

    } while (opt != 0);
*/

    // Liberando memória alocada
    /*
    for (int i = 0; i < 3; i++) {
        free(contactInfo[i]);
    }
    free(contactInfo);
    */