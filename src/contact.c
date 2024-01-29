#include "contact.h"
#include "layout.h"
#include "tools.h"
#include "uuid.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

Contact agenda[MAX_CONTATOS];//contatos cadastrados
Contact similarNames[MAX_CONTATOS];//lista com nomes parecidos com o que o usuario digitou
int totalContatos = 10; // 10 só para testar valor original é 0

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
        printf("UUID: %s\n", agenda[i].uuid);
        printf(".............................\n");
    }
}

void searchContact(char name[50]){
    printf("Procurando por %s\n", name);
    //criar um array para guardar os contatos que tenha o mesmo nome digitado
    //e exibir esses nomes todos tem que fazer referencia a posição em que eles se encontram
    //no array de onde se origina com base em um id que terei que implementar
    
    
    
    for (int i = 0; i < totalContatos; i++){
         if(compareString(agenda[i].nome, name) == TRUE){
            strcpy(similarNames[i].nome, agenda[i].nome);
            strcpy(similarNames[i].uuid, agenda[i].uuid);
            //printf("é igual\n"); 
            //adiciona nome e uuid similarNames se existir nomes parecidos dos contatos cadastrados    
        }else {
            printf("é diferente\n");
        }
        
    }

    for (int i = 0; i < totalContatos; i++){
        printf("Nomes similar\n");
        printf("%s\n", similarNames[i].nome);
        printf("%s\n", similarNames[i].uuid);
        printf("----------------------------------\n");
    }
    
}

//conta as letras de palavara
int countLetters(const char *word){
    int i = 0;
    while (word[i] != '\0') {
        i++;
    }
    return i;
}

int compareString(char *caracter1, char *caracter2){
    //se as duas palavras forem de tamanhos iguais e tenha os mesmos caracteres
    if (compareLengthStringsIsEquals(caracter1, caracter2) == TRUE && compareCharPerChar(caracter1, caracter2) == TRUE){
        return TRUE;
    }else{
        return FALSE;
    }
}

//compara caracter por caracter
int compareCharPerChar(char *caracter1, char *caracter2){
   int sameWord = compareLettersIsSame(caracter1, caracter2);
   if (sameWord == TRUE){
    //printf("mesmo caracter\n");
    return TRUE;//se todos caracteres forem iguais 
   }else{
    //printf("diferentes caracter\n");
    return FALSE;//se todos caracteres forem diferentes 
   }
}

//compara se as palavras tem a mesma quantidade de caracteres
int compareLengthStringsIsEquals(char *caracter1, char *caracter2){
    int lenString1 = countLetters(caracter1);
    int lenString2 = countLetters(caracter2);
    
    if(lenString1 != lenString2){
        return FALSE;
        //printf("a palavra %s é maior\n", caracter2);
        //printf("com %d", lenString);
    }else if(lenString1 == lenString2){
        return TRUE;
    }
    return FALSE;
}

//compara se as palavras tem os mesmo caracteres na mesma ordem
int compareLettersIsSame(char *caracter1, char *caracter2){
    int lenString = countLetters(caracter1);
    int cont = 0;

    //percorre o array de char para comparar se as letras são iguais
    while(caracter1[cont] != '\0' && cont !=EOF){
        if(caracter1[cont] == caracter2[cont]){// se for igual não faz nada

        }else{//se nao for igual, sai do loop
            break;
        }
        cont++;
    };

    if(cont == lenString){
        //printf("São iguais\n");
        return TRUE;
    }else{
        //printf("São diferentes\n");
        return FALSE;        
    }
}