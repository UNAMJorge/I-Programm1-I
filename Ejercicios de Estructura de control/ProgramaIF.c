/* Digite un numero, si el numero supera a 10, 
multiplique los 10 primeros numeros, 
sino, sumelos */

#include<stdio.h>

int main(){

	int numero,suma=0, mult=1,i=1;
	
	printf("Digite un numero: ");scanf("%i",&numero);

	if(numero>10){
		while(i<=10){
			mult*=i;
			i++;
		}
		printf("\n La multiplicacion es: %i",mult);
	}else{
		while(i<=10){
			suma+=i;
			i++;
		}
		printf("\n La suma es: %i",suma);
	}
	
	return 0;
}
