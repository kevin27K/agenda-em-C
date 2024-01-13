#ifndef LAYOUT_H
#define LAYOUT_H

void clearScreen();
void title();
void options();
void initialScreen();
void mainScreen();
void optionsScreen();
void addContactScreen();
void showAllContactsScreen();
void searchContactScreen();
void editContactScreen();
void delContactScreen();

int backMenu();
int backMenuOrAddNewContact();
int backMenuOrSearchAgain();

char** getInfoContact();

#endif