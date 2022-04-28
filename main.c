#include <stdio.h>
#include <stdlib.h>


//A) Calcular y retornar la longitud de una cadena dada.
int longCadena(char cadena[])
{
        int i = 0;
    while(cadena[i] != '\0'){
        i++;
    }
    return i;
}

//B) Convertir una cadena de dígitos en su equivalente numérico.
int cadEnEquiNum(char cadena[])
{
    return cadena;
}

//C) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.

char convertirMayus (char cadena[]){
    int i = 0;
    while(cadena[i] != '\0'){
        if(cadena[i]>= 'a' && cadena[i]<= 'z'){
            cadena[i]-= 32;
        }
        i++;
    }
}

//D) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.

char eliminarCaracter (char cadena[], char crt){
    int i = 0;
    int j = 0;
    while(cadena[i] != '\0'){
        if(cadena[i] == crt){
            j = i;
            i--;
            while (cadena[j] != '\0'){
                cadena[j] = cadena[j+1];
                j++;
            }
        }
        i++;
    }
}
//E)

void conctanearDosCadenas(char *cad1, char cad2[]){
strcat(cad1, cad2 );
}

//F) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
void modificarCadena(char *cad, int posc, char valor){
        int i = 0;


    for( i=0 ; i <= posc ; i++){

        if (i == posc)
            cad[i] = valor;
    }
}


int main()
{
    int cant, equiCad;
    char *cad1="Hola ";
    char cad2[]="Mundo";
    char str1[100];
    char str2[100];
    char crt = 'o';

    //Prueba Punto a)
    cant = longCadena("Hola a Todos");
    printf("Equivalente numerico de cadena: %i \n", cant);


    //Prueba Punto b)
    equiCad = cadEnEquiNum ("Hola a Todos y Todas");
 printf("Longitud de cadena: %d \n", equiCad);


    //Prueba Punto c)
     str1[100];
    printf("Ingresa un String : \n");
    scanf("%[^\n]s",str1);

    convertirMayus(str1);
    printf("String con la función aplicada : %s\n",str2);


    //Prueba Punto d)
     str2[100];
     crt = 'o';
	printf("Ingresa un String : \n");
    scanf("%[^\n]s",str2);

    eliminarCaracter(str2, crt);
    printf("String con la función aplicada : %s\n",str2);


    //Prueba Punto e)
    conctanearDosCadenas(cad1,cad2);
    printf("Concatenacion de cadenas: %s \n", cad1);


    //Prueba Punto f)
    modificarCadena( cad1, 5, '!');
    printf("Cambio de caracter en posicion determinada: %s \n", cad1);

    return 0;
}
