// Determinar si un Numero es Primo o no.

#include<stdio.h>

int main(){

	int numero,cont = 0;
	
	printf("Digite un numero: "); scanf("%i",&numero);
	
	for(int i = 1; i <= numero; i++){
		if(numero%i == 0){
			cont++;
		}
	}
	
	if(cont>2){
		printf("\n El numero es compuesto");
	}else{
		printf("\n El numero es primo");
	}
	
	
	
	return 0;
}
