#include "search.h"
#include "contact.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//teste ou temporario nesse arquivo

/*
int registerContact(){
    FILE *arquivo;
    arquivo = fopen("lista_contatos.txt", "w");

    if(arquivo == NULL){
        printf("Erro ao carregar o arquivo!");
        return 1;
    }else{
    for (int i = 0; i < totalContatos; i++){
        fprintf(arquivo, "%s;%s;%s\n", agenda[i].nome, agenda[i].telefone, agenda[i].email);
    }
    
        fclose(arquivo);
    
        return 1;
    }
}

int loadContact(){
    FILE *arquivo = fopen("lista_contatos.txt", "r");

        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    int numContatos = 0;
    // Ler contatos do arquivo
     while (numContatos < MAX_CONTATOS && 
           fscanf(arquivo, "%49[^;];%19[^;];%49[^\n]\n", 
                  agenda[numContatos].nome, 
                  agenda[numContatos].telefone, 
                  agenda[numContatos].email) == 3) {
        numContatos++;  // Incrementa o número de contatos lidos com sucesso
    }

    fclose(arquivo);  // Fecha o arquivo após a leitura
    return numContatos;
}
//-------------------------------------

int selectionSort(int arr[100]){ //adapatar para 
    int cont;
    int maior;
    for (int i = 0; i < 16; i++){
        //printf("%d\n", arr[i]);
        printf("Compatando %d\n", arr[i]);
        for(int j = i+1; j < 16; j++ ){
            printf("com %d\n", arr[j]);
            if(arr[j] < arr[i]){
                maior = arr[i];
                arr[i] = arr[j];
                arr[j] = maior;
            }
        }
        cont++;
    }

    for (int x = 0; x < 16; x++){
        printf("%d\n", arr[x]);
    }


    

    return arr[100];
    
}
*/