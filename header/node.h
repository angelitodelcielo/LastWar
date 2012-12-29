#ifndef NODE_H
#define NODE_H

typedef struct node
{
    CARD *card;
    struct node *next;
}NODE;

#include "card.h"

NODE* (createNode (CARD *card, NODE *next));

#endif
