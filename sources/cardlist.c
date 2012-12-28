#include "../header/cardlist.h"

// Crée une nouvelle liste chainée de cartes
CARDLIST* createCardList(){
    CARDLIST *cardlist = malloc (sizeof (CARDLIST));
    cardlist->size = 0;
    cardlist->first = NULL;
    cardlist->last = NULL;
    return cardlist;
}

// Ajoute la carte card au bout de la liste chainée cardlist
void addCardLast (CARDLIST *cardlist, CARD *card){
    NODE *newnode = createNode (card, NULL);

    // Cas de la liste vide
    if (cardlist->size == 0){
        cardlist->first = newnode;
    }else{
    cardlist->last->next = newnode;
    }
    cardlist->last = newnode;
    cardlist->size++;
}

// Affiche la liste chainées cardlist
void printCardList (CARDLIST* cardlist){
    if (cardlist->size == 0){
        printf ("[]\n");
        return;
    }

    NODE *current = cardlist->first;
    printf ("[%s", current->card->name);
    while (current->next != NULL){
        printf (", %s", current->next->card->name);
        current = current->next;
    }
    printf ("]\n");
}

char buffer[BUFFER_SIZE];
