#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.c"
#include "card.c"
#include "deck.c"
#include "/usr/include/mysql/my_global.h"
#include "/usr/include/mysql/mysql.h"

int main(){

/*
#######################
Init Game
#######################
*/
  char conf = '0';
  char name[100];

  printf("\nWelcome to the Last War Game\n");
  printf("------------------------------\n\n");

  do{
    printf("Configurer comme :\n");
    printf("[1]. Client\n");
    printf("[2]. Server\n\n");
    
    scanf(" %c",&conf);
    fflush(stdin);
   
<<<<<<< HEAD
  }while(conf!='1' &&
         conf!='2');
=======
  }while(!strcmp(conf,"1") &&
         !strcmp(conf,"2");
>>>>>>> 2ba25c43005e91ac8e9d08b29921a21db3c18f0c


/*
#######################
Creation du joueur
#######################
*/

 printf("\nChoissisez votre nom:\n");

 scanf(" %s", &name);

 PLAYER* player = createPlayer(name);

 printf("you're name's:");

 printPlayer(player);

 printf("\n\n");
  
 return 0;
}
