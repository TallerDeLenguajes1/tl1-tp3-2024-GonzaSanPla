#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

int main(){

    char *nombres[N];
    char *buffer;  //variable auxiliar

    buffer=(char *)malloc(sizeof(char)*30);// 30 por la cantidad de caracteres por nombre

    for (int i = 0; i < N; i++)
    {
        printf("\nIngrese el nombre N%d:",i+1);
        gets(buffer);

        nombres[i]=(char *)malloc(sizeof(char)*(strlen(buffer)+1));
        strcpy(nombres[i],buffer);
    }

    free(buffer);

    for (int i = 0; i < N; i++)
    {
        printf("\nEl nombre N%d: %s",i+1,nombres[i]);
        free (nombres[i]);
    }



    return(0);
}