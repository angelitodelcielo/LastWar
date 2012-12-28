#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 80

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

int main(){
    return 0;
}
