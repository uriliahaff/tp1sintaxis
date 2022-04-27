#include <stdio.h>
#include <stdlib.h>


//Punto a)
int longCadena(char cadena[])
{
    return strlen(cadena);
}

//Punto b)
int cadEnEquiNum(char cadena[])
{
    return cadena;
}

//Punto e)

void conctanearDosCadenas(char *cad1, char cad2[]){
strcat(cad1, cad2 );
}

int main()
{
    int cant, equiCad;
    char *cad1="Hola ";
    char cad2[]="Mundo";

    //Prueba Punto a)
    cant = longCadena("Hola a Todos");
    printf("Equivalente numerico de cadena: %i \n", cant);

    //Prueba Punto b)
    equiCad = cadEnEquiNum ("Hola a Todos y Todas");
 printf("Longitud de cadena: %d \n", equiCad);
    //Prueba Punto e)
    conctanearDosCadenas(cad1,cad2);
    printf("Concatenacion de cadenas: %s \n", cad1);
    return 0;
}
