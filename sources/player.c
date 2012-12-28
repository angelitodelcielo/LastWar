#include <stdlib.h>
#include <stdio.h>
#include "../header/player.h"
 
PLAYER* createPlayer(char *name){
	PLAYER* player = malloc(sizeof(PLAYER));
	player->name = name;
	player->life = 12;
	return player;
}

void printPlayer(PLAYER *player){
	printf("%s",player->name);
}

