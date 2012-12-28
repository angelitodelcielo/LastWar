#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.c"
#include "card.c"
#include "deck.c"
#include </usr/include/mysql/my_global.h>
#include </usr/include/mysql/mysql.h>

int main(){

/*
#######################
Init Game
#######################
*/
  int conf = 0;
  char name[100];

  printf("\nWelcome to the Last War Game\n");
  printf("------------------------------\n\n");

  do{
    printf("Configurer comme :\n");
    printf("1. Client\n");
    printf("2. Server\n\n");
    
    scanf(" %d",&conf);
   
  }while(conf!=1&&conf!=2);


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
/*
	
  MYSQL *conn;

  conn = mysql_init(NULL);

  if (conn == NULL) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
  }

  if (mysql_real_connect(conn, "localhost", "root", "test", NULL, 0, NULL, 0) == NULL) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
  }

  if (mysql_query(conn, "create database if not exists testdb")) {
      printf("Error %u: %s\n", mysql_errno(conn), mysql_error(conn));
      exit(1);
  }

  mysql_close(conn);
*/
  return 0;
}
