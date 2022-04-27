#include <stdio.h>
#include <stdlib.h>


//A) Calcular y retornar la longitud de una cadena dada.
int longCadena(char cadena[])
{
    return strlen(cadena);
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


    //Prueba Punto c)
    char str1[100];
    printf("Ingresa un String : \n");
    scanf("%[^\n]s",str1);

    convertirMayus(str1);
    printf("String con la función aplicada : %s\n",str2);


    //Prueba Punto d)
    char str2[100];
    char crt = 'o';
	printf("Ingresa un String : \n");
    scanf("%[^\n]s",str2);

    eliminarCaracter(str2, crt);
    printf("String con la función aplicada : %s\n",str2);


    //Prueba Punto e)
    conctanearDosCadenas(cad1,cad2);
    printf("Concatenacion de cadenas: %s \n", cad1);
    return 0;
}
