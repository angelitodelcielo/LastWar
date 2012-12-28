#include <stdio.h>
#include <stdlib.h>
#include "../header/card.h"

typedef struct card{
	char *name;
	int life;
	int cost;
	int attack;
}CARD;

CARD* createCard(){
	CARD *card = malloc(sizeof(CARD));
	return card;
}

void initCard(CARD* card){
		
}

void deleCard(CARD* card){

}

CARD* loadCard(CARD* card){ 

}

