#ifndef NODE_H
#define NODE_H

typedef struct node
{
    CARD *card;
    struct node *next;
}NODE;

NODE* (createNode (CARD *card, NODE *next);

#endif
