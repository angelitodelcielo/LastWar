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

        menu = displayMenu();

        if(menu == LAN){

            configServer();
            initPlayer();
        }    
        else if(menu == LOCAL){

            initPlayer();    
        }


        printf("\n");
        printf("Players were created");
        printf("\n\n");
    }while(menu!=EXIT);

    return 0;
}
