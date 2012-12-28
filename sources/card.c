#include "../header/card.h"

CARD* createCard(){
    CARD *card = malloc(sizeof(CARD));
    return card;
}

// Récupère la carte d'indice i de la liste chainée cardlist
CARD* getCard (CARDLIST *cardlist, int i){
    if (i < 0 || i >= cardlist->size){
        return NULL;
    }

    int j;
    NODE *current = cardlist->first;
    for (j = 0; j < i; j++){
        current = current->next;
    }
    return current->card;
}

// Retire et carte d'indice i de la liste chainée cardlist
CARD* removeCard (CARDLIST *cardlist, int i){
    if (i < 0 || i >= cardlist->size){
        return NULL;
    }

    CARD *card = NULL;

    // Cas de la liste à un seul élément
    if (cardlist->size == 1 && i == 0){
        card = cardlist->first->card;
        cardlist->first = NULL;
        cardlist->last = NULL;

    }else{

        NODE *toremove = cardlist->first;

        // Celui à supprimer est le premier
        if (i == 0){
            cardlist->first = cardlist->first->next;
            toremove->next = NULL;
            card = toremove->card;

        // Il faut se placer avant celui à supprimer
        }else{
            int j;
            for (j = 1; j < i; j++){
                toremove = toremove->next;
            }

            // Celui à supprimer est le dernier
            if (i == cardlist->size - 1){
                toremove->next = NULL;
                cardlist->last = toremove;
            }else{
                toremove->next = toremove->next->next;
            }
            card = toremove->card;
        }
    }
    cardlist->size--;

    return card;
}
void initCard(CARD* card){
    
}

void deleCard(CARD* card){
    
}

CARD* loadCard(CARD* card){ 
    
}

