#ifndef CONTACT_LAYOUT_H
#define CONTACT_LAYOUT_H

typedef enum {
    NEW_CONTACT = 1,
    SHOW_ALL_CONTACT = 2,
    SEARCH_CONTACT = 3,
    EDIT_CONTACT = 4,
    DEL_CONTACT = 5,
    EXIT_PROGRAM = 0
} Options;

int selectOption(Options opt);

#endif