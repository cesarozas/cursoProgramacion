/*int leernumero();*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int b1, b2, b5, b10, b20, b50, b100, importe;
float b01, b02, b05;

int main(){
    
int funcionumero();
int numero;
char stringNumer[4];

printf("Ingrese numero: \n");

        scanf("%s", &stringNumer);
        
        numero=atoi(stringNumer);

/*int funcionumero()
{
    int num,pos;
    char *stringNumer;
   /* do {
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
    
    
    

    	/*Definir v Como Entera
	Definir j Como Numerica*/
	
    if (numero>=1000) {
    
   	b100=numero/100;
	b50=(numero%100)/50;
	b20=numero%100%50/20;
	b10=numero%100%50%20/10;
	b5=numero%100%50%20%10/5;
        b2=numero%100%50%20%10%5/2;
	b1=numero%100%50%20%10%5/2;
}
        else if (numero>=100){
        
        b100=numero/100;
	b50=(numero%100)/50;
	b20=numero%100%50/20;
	b10=numero%100%50%20/10;
	b5=numero%100%50%20%10/5;
}
        else if (numero>=10){
            
        b50=(numero%100)/50;
	b20=numero%100%50/20;
	b10=numero%100%50%20/10;
	b5=numero%100%50%20%10/5;
}
        else if (numero>=5){
        
        b5=numero/5;
	b20=numero%5/2;
	b1=numero%5%2;
}
	else if (numero>=1){
        
        b2=numero/2;
	b1=numero%2;
}	
	/*else if (numero>=){
        
        b2=numero/2;
	b1=numero%2;
}			
		>=0,01:
			b05<-numero/0.5
			b02<-numero%0.5/0.2
			b01<-numero%0,5%0.2/0.1
		De Otro %o:
			Escribir 'Para el bote'
	Fin Segun
        FinAlgoritmo*/

        printf("La combinacion de billetes es: \n");
        printf("de 100: %d\n", b100);
        printf("de 50: %d\n", b50);
        printf("de 20: %d\n", b20);
        printf("de 10: %d\n", b10);
        printf("de 5: %d\n", b5);
        printf("de 2: %d\n", b2);
        printf("de 1 %d\n", b1);
        
    return 0;
}
