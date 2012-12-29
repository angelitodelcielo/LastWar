#ifndef CARDLIST_H
#define CARDLIST_H

#include "node.h"

typedef struct cardlist{
    int size;
    NODE* first;
    NODE* last;
}CARDLIST;

#include "card.h"

CARDLIST* createCardList();
void addCardLast (CARDLIST *cardlist, CARD *card);
void printCardList (CARDLIST* cardlist);

#endif
