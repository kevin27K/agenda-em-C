#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[12];
    char email[50];
} Contato;

extern Contato agenda[MAX_CONTATOS];
extern int totalContatos;

int addNewContact();
void showAllContacts();
void searchContact(char name[50]);

#endif