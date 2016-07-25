#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int leernumero()
{
    int num,pos;
    char *stringNumer;
   /* do {*/
        printf("Ingrese numero: \n");
        scanf("%s", &stringNumer);
        num=atoi(stringNumer);
        pos=strlen(stringNumer);
        /* atoi convierte el numero ingresado como cadena en entero
    en caso de ser posible, de lo contrario retorna 0*/
    
    /*}while(num<=0 || validarEntrada(stringNumer)!=0);
        
    /*
    if(num!=0) 
        printf("El numero es: %d\n",num);
    else
        printf("No es un numero\n"); */  
    
    
    return num;
    
}

/*Validar la entrada, si la cadena entrada es un numero devuelve cero sino 1*/
int validarEntrada(char nom[]) 
{ 
    int i = 0; 
    int valido = 0;// incializo la variable...es necesario. 
    int numCarac = strlen(nom); /*strlen nos dice la longitud de la cadena de caracteres*/

    for( i = 0; i < numCarac; i++) 
        { 
        if(isdigit(nom[i])) /* recorro toda la cadena comprobando si 'isdigit' lo que contiene cada uno de los caracteres*/
            { 
            continue; 
            valido = 0; 
            } 
        else 
            { 
            valido = 1;
            } 
    break;
    } 

return valido; 
} 