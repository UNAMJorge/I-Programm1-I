// Multiplos de 5 desde 1 hasta n 

#include<stdio.h>

int main(){

	int n,i=1;
	
	printf("Digite el total de elementos: ");scanf("%i",&n);
	
	while(i<=n){
		if(i%7 == 0){
			printf("%i\n",i);
		}
		i++;		
	}
	
	
	return 0;
}
