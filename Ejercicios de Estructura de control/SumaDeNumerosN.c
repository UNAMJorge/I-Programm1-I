//  Suma de los n primeros numeros

#include<stdio.h>

int main(){

	int i = 1, suma = 0,n;
	
	printf("Digite la cantidad de numeros a sumar: ");
	scanf("%i",&n);
	
	
	while(i<=n){
		suma += i;
		i++;
	}
	printf("La suma es: %i",suma);
	
	
	return 0;
}


