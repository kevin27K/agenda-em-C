#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTATOS 100

typedef struct {
    char uuid[37];
    char nome[50];
    char telefone[12];
    char email[50];
} Contact;

extern Contact agenda[MAX_CONTATOS];
extern int totalContatos;

void generateUUID(char *uuid);
void initializeContact(Contact *contact);

int addNewContact();
void showAllContacts();
void searchContact(char name[50]);

#endif