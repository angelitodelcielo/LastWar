#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 80

struct card
{
	char *name;
	int life;
	int cost;
	int attack;
};
typedef struct card CARD;

struct deck
{
	int capacity;
	int size;
	CARD** cards;
};
typedef struct deck DECK;

struct player
{
	char *name;
	int life;
	DECK *deck;
};
typedef struct player PLAYER;

struct node
{
	CARD *card;
	struct node *next;
};
typedef struct node NODE;

struct cardlist
{
	int size;
	NODE* first;
	NODE* last;
};
typedef struct cardlist CARDLIST;

struct gameboard
{
	CARDLIST *hand;
	int resources;
	CARD *attack;
};
typedef struct gameboard GAMEBOARD;

// Crée un nouveau noeud de la structure chainée
NODE *createNode (CARD *card, NODE *next)
{
	NODE *newnode = malloc (sizeof (NODE));
	newnode->card = card;
	newnode->next = next;
	return newnode;
}

// Crée une nouvelle liste chainée de cartes
CARDLIST* createCardList()
{
	CARDLIST *cardlist = malloc (sizeof (CARDLIST));
	cardlist->size = 0;
	cardlist->first = NULL;
	cardlist->last = NULL;
	return cardlist;
}

// Récupère la carte d'indice i de la liste chainée cardlist
CARD* getCard (CARDLIST *cardlist, int i)
{
	if (i < 0 || i >= cardlist->size)
	{
		return NULL;
	}
	
	int j;
	NODE *current = cardlist->first;
	for (j = 0; j < i; j++)
	{
		current = current->next;
	}
	return current->card;
}

// Ajoute la carte card au bout de la liste chainée cardlist
void addCardLast (CARDLIST *cardlist, CARD *card)
{
	NODE *newnode = createNode (card, NULL);
	
	// Cas de la liste vide
	if (cardlist->size == 0)
	{
		cardlist->first = newnode;
	}
	else
	{
		cardlist->last->next = newnode;
	}
	cardlist->last = newnode;
	cardlist->size++;
}

// Retire et carte d'indice i de la liste chainée cardlist
CARD* removeCard (CARDLIST *cardlist, int i)
{
	if (i < 0 || i >= cardlist->size)
	{
		return NULL;
	}
	
	CARD *card = NULL;
	
	// Cas de la liste à un seul élément
	if (cardlist->size == 1 && i == 0)
	{
		card = cardlist->first->card;
		cardlist->first = NULL;
		cardlist->last = NULL;
	}
	else
	{
		NODE *toremove = cardlist->first;
		
		// Celui à supprimer est le premier
		if (i == 0)
		{
			cardlist->first = cardlist->first->next;
			toremove->next = NULL;
			card = toremove->card;
		}
		// Il faut se placer avant celui à supprimer
		else
		{
			int j;
			for (j = 1; j < i; j++)
			{
				toremove = toremove->next;
			}
			
			// Celui à supprimer est le dernier
			if (i == cardlist->size - 1)
			{
				toremove->next = NULL;
				cardlist->last = toremove;
			}
			else
			{
				toremove->next = toremove->next->next;
			}
			card = toremove->card;
		}
	}
	cardlist->size--;
	
	return card;
}

// Affiche la liste chainées cardlist
void printCardList (CARDLIST* cardlist)
{
	if (cardlist->size == 0)
	{
		printf ("[]\n");
		return;
	}
	
	NODE *current = cardlist->first;
	printf ("[%s", current->card->name);
	while (current->next != NULL)
	{
		printf (", %s", current->next->card->name);
		current = current->next;
	}
	printf ("]\n");
}

char buffer[BUFFER_SIZE];

// Supprime les caractères blancs (espace, tabulation, saut de ligne...) qui sont devant et derrière la chaine str
// Adapted from: http://stackoverflow.com/questions/122616/how-do-i-trim-leading-trailing-whitespace-in-a-standard-way
char *trim (char *str)
{
	char *end;
	while (isspace (*str))
	{
		str++;
	}
	
	if (*str == 0)
	{
		return str;
	}
	
	end = str + strlen (str) - 1;
	while (end > str && isspace (*end))
	{
		end--;
	}
	
	*(end + 1) = 0;
	
	return str;
}

// Lit la ligne suivante du fichier file et renvoie son contenu sous forme d'une chaine de caractères
char* readString (FILE* file)
{
	fgets (buffer, BUFFER_SIZE, file);
	int strsize = strlen (buffer) - 1;
	char *result = malloc (strsize * sizeof (char));
	strncpy (result, buffer, strsize);
	
	return trim (result);
}

// Lit la ligne suivante du fichier file et renvoie son contenu sous forme d'une entier int
int readInt (FILE* file)
{
	fgets (buffer, BUFFER_SIZE, file);
	return atoi (buffer);
}

int main()
{
	return 0;
}