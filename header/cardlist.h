#ifndef CARDLIST_H
#define CARDLIST_H

typedef struct cardlist{
    int size;
    NODE* first;
    NODE* last;
}CARDLIST;

CARDLIST* createCardList();
void addCardLast (CARDLIST *cardlist, CARD *card);

#endif
