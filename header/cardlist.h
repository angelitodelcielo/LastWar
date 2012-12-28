typedef struct cardlist
{
    int size;
    NODE* first;
    NODE* last;
}CARDLIST;

CARDLIST* createCardList();
void addCardLast (CARDLIST *cardlist, CARD *card);
