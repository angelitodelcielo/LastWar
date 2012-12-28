char displayMenu(){
    char response = '0';
    do{
        printf("\nWelcome to the Last War Game\n"); 
        printf("------------------------------\n\n");
        printf("[1]. LOCAL\n");
        printf("[2]. LAN\n");
        printf("[3]. HELP\n\n");
        printf("Reponse:");
        scanf(" %c",&response);
        printf("\n\n");
    }while(response!='1' && 
           response!='2' && 
           response!='3');
}

void initPlayer(){
    int nbplayer = 1;
    char name[100];
    int i;

    printf("Combien de joueur?: ");
    scanf(" %d",&nbplayer);
    printf("\n\n");    

    for(i=1;i<nbplayer+1;i++){
        printf("\nNom du %d joueur:\n",i); 
        scanf(" %s", &name);
        /*PLAYER* player2 = createPlayer(name);*/
    }
}
