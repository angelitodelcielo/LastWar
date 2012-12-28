typedef struct player {
    char *name;
    int life;
    DECK *deck;
}PLAYER;

/**
 * @brief Create player
 *
 * @param name Player's name
 *
 * @return Player pointer
 */
PLAYER* createPlayer(char *name);

void printPlayer(PLAYER* player);
