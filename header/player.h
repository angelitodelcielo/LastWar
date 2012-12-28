typedef struct player {
	char *name;
	int life;
	
}PLAYER;

PLAYER* createPlayer(char *name);

void printPlayer(PLAYER* player);
