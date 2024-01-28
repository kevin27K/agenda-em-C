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

int addNewContact(const char *nome, const char *telefone, const char *email);
void showAllContacts();

void searchContact(char name[50]);
int countLetters(const char *palavra);
int compareString(char *caracter1, char *caracter2);
int compareCharPerChar(char *caracter1, char * caracter2);
int compareLengthStringsIsEquals(char *caracter1, char *caracter2);
int compareLettersIsSame(char *caracter1, char *caracter2);
#endif