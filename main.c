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
    int i = 0;
    int numero = 0;
    int aux = 0;
    while(cadena[i] != '\0'){
        if(cadena[i]>= '0' && cadena[i]<= '9'){
            aux = cadena[i]- 48;
            numero = (10*numero) + aux;
        }
        i++;
    }
    return numero;
} 
//C) Convertir una cadena de caracteres a la misma cadena con todos sus caracteres en mayúscula.

void convertirMayus (char cadena[]){
    int i = 0;
    while(cadena[i] != '\0'){
        if(cadena[i]>= 'a' && cadena[i]<= 'z'){
            cadena[i]-= 32;
        }
        i++;
    }
}

//D) Eliminar de una cadena dada todas las ocurrencias de un carácter dado.

void eliminarCaracter (char cadena[], char crt){
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
//E Concatenar al final de la primer cadena dada una segunda cadena también dada.

void concatenarDosCadenas(char cad1[], char cad2[], char *cad3)
{
int i=0,j=0;
while(cad1[i]!='\0'){
cad3[i]=cad1[i];
i++;
}
while(cad2[j]!='\0'){
cad3[i]=cad2[j];
i++;
j++;
}
}

//F) Modificar la cadena dada con la inserción de un carácter dado en una posición determinada.
void modificarCadena(char *cad, int posc, char valor, int long_cadena)
{
	int i=0, j=0;
	char cad_aux[long_cadena]; //cadena auxiliar
	
	//copio el contenido en la cadena auxiliar
	for(i=0; i < long_cadena; i++)
	{
		cad_aux[i]= cad[i];
	}
	//actualizo la cadena 
	cad[posc]= valor;
	//actualizo el indice
	i=posc;
	//copio en la cadena lo que falta
	for( j=posc+1; j<long_cadena ; j++)
	{
		cad[j] = cad_aux[i];
		i++;
	} 
}



int main()
{
    int cant, equiCad;
    char *cad1="Hola ";
    char cad2[]="Mundo";
    char *cad3="";
    char str1[100];
    char str2[100];
    char crt = 'o';

    //Prueba Punto a)
    cant = longCadena("Hola a Todos");
    printf("Equivalente numerico de cadena: %i \n", cant);


    //Prueba Punto b)
    str1[100];
    int resultado = 0;
    printf("Ingresa un String : \n");
    scanf("%[^\n]s",str1);
    
    resultado = cadEnEquiNum(str1);
    printf("\nINT devuelto con la función aplicada : %i\n",resultado);


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
   concatenarDosCadenas(cad1,cad2,cad3);
    printf("Concatenacion de cadenas: %s \n", cad3);


    //Prueba Punto f)
    modificarCadena( cad1, 5, '!');
    printf("Cambio de caracter en posicion determinada: %s \n", cad1);

    return 0;
}
