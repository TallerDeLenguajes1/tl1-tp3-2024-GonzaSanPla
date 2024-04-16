#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
#define N 12

int numAl(int min, int max);
void cargarMat(int mat[M][N]);
void mostrarMat(int mat[M][N]);
int promedio(int arre[N]);
void maxMin(int mat[M][N]);

int main()
{
    int produc[M][N];

    cargarMat(produc);
    
    mostrarMat(produc);

    for (int i = 0; i < M; i++)
    {
        printf("\nEl promedio del anio %d es %d",i+1,promedio(produc[i]));
    }
    
    maxMin(produc);

    return(0);
}



int numAl(int min, int max)
{
    int numRand;

    numRand=min+rand()% (max+1);

    return(numRand);
}

void cargarMat(int mat[M][N])
{
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat[i][j]=numAl(10000,50000);
        }
        
    }
    
}


void mostrarMat(int mat[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ",mat[i][j]);
        }
        
        printf("\n");
    }
    
}

int promedio(int arre[N]){

    int prom=0,sum=0;

    for (int i = 0; i < N ; i++)//Como se cuando llego al ultimo elemento
    {   
        sum=sum+arre[i];
    }

    prom=sum/N;


    return(prom);
}

void maxMin(int mat[M][N])
{
    int imin,imax,jmin,jmax;
    int prodMax=0,prodMin=999999;


    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j]>prodMax)
            {
                imax=i;
                jmax=j;
                prodMax=mat[i][j];
            }
            if (mat[i][j]<prodMin)
            {
                imin=i;
                jmin=j;
                prodMin=mat[i][j];
            }
        }
    }
    
    printf("\nLa produccion minima es de %d y ocurrio en el mes %d del anio %d",prodMin,imin,jmin);
    printf("\nLa produccion maxima es de %d y ocurrio en el mes %d del anio %d",prodMax,imax,jmax);
}