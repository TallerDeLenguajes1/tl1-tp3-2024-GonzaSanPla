#include <stdio.h>
#include <stdlib.h>


struct  {
int ProductoID; //Numerado en ciclo iterativo
int Cantidad; // entre 1 y 10
char *TipoProducto; // Algún valor del arreglo TiposProductos
float PrecioUnitario; // entre 10 - 100
}typedef Producto ;

struct  {
int ClienteID; // Numerado en el ciclo iterativo
char *NombreCliente; // Ingresado por usuario
int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
Producto *Productos //El tamaño de este arreglo depende de la variable
        // “CantidadProductosAPedir"
}typedef Cliente;


int main(){

    int cantCli;
    Cliente *listado;

    char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

    printf("Ingrese la cantidad de clientes:");
    scanf("%d",&cantCli);

    listado=(Cliente *)malloc(sizeof(Cliente)*cantCli);//Hacer otro en bluque para cada producto
    


    return(0);
}

