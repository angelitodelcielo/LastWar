#define BUFFER_SIZE 80
#define LOCAL '1'
#define LAN   '2'
#define AIDE  '3'

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
<<<<<<< HEAD
=======

>>>>>>> 939d81a73de3398889f88d4318dc511a8347945b

int main(){

/*
#######################
Init Game
#######################
*/
    char conf = '0';

    char menu = displayMenu();
    
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
  
 return 0;
}
