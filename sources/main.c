#define BUFFER_SIZE 80
#define LOCAL '1'
#define LAN   '2'
#define HELP  '3'
#define EXIT  '4'

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "card.c"
#include "cardlist.c"
#include "deck.c"
#include "library.c"
#include "mysql.c"
#include "node.c"
#include "player.c"

int main(){

    /*
#######################
Init Game
#######################
*/
    char menu = '0'; 
    do{
        char conf = '0';

        menu = displayMenu();

        if(menu == LAN){

            do{
                printf("Configurer comme :\n");
                printf("[1]. Client\n");
                printf("[2]. Server\n\n");

                scanf(" %c",&conf);
                fflush(stdin);

            }while(conf!='1' &&
                    conf!='2');

            initPlayer();
        }    
        else if(menu == LOCAL){

            initPlayer();    
        }


        printf("\n\n");
        printf("Les joueurs ont ete crées");
        printf("\n\n");
    }while(menu!=EXIT);

    return 0;
}
