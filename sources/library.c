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


// Supprime les caractères blancs (espace, tabulation, saut de ligne...) qui sont devant et derrière la chaine str
// Adapted from: http://stackoverflow.com/questions/122616/how-do-i-trim-leading-trailing-whitespace-in-a-standard-way
char *trim (char *str){
    char *end;
    while (isspace (*str)){
        str++;
    }
    if (*str == 0){
        return str;
    }

    end = str + strlen (str) - 1;
    while (end > str && isspace (*end)){
        end--;
    }

    *(end + 1) = 0;

    return str;
}

// Lit la ligne suivante du fichier file et renvoie son contenu sous forme d'une chaine de caractères
char* readString (FILE* file){
    fgets (buffer, BUFFER_SIZE, file);
    int strsize = strlen (buffer) - 1;
    char *result = malloc (strsize * sizeof (char));
    strncpy (result, buffer, strsize);

    return trim (result);
}

// Lit la ligne suivante du fichier file et renvoie son contenu sous forme d'une entier int
int readInt (FILE* file){
    fgets (buffer, BUFFER_SIZE, file);
    return atoi (buffer);
}
