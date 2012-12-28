typedef struct deck{
	int capacity;
	int size;
	CARD** cards;
}DECK;

DECK* createDeck();

void initDeck(DECK* deck);

void deleDeck(DECK* deck);

DECK* loadDeck(DECK* deck);

