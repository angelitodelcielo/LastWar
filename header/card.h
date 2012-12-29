#ifndef CARD_H
#define CARD_H

typedef struct card{
    char *name;
    int life;
    int cost;
    int attack;
}CARD;

#include "cardlist.h"

CARD* getCard (CARDLIST *cardlist, int i);
CARD* removeCard (CARDLIST *cardlist, int i);

#endif
