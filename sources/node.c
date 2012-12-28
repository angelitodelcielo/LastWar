#include "../header/node.h"

// Crée un nouveau noeud de la structure chainée
NODE *createNode (CARD *card, NODE *next){
    NODE *newnode = malloc (sizeof (NODE));
    newnode->card = card;
    newnode->next = next;
    return newnode;
}
