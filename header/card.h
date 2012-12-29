#ifndef CARD_H
#define CARD_H

typedef struct card{
    char *name;
    int life;
    int cost;
    int attack;
}CARD;

CARD* getCard (CARDLIST *cardlist, int i);
CARD* removeCard (CARDLIST *cardlist, int i);
void printCardList (CARDLIST* cardlist);

#endif
