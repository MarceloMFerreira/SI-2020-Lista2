#include<stdio.h>
#include<stdlib.h>
#include "bbmt.h"
int main(){
	int mt[100][100],x,i,j,soma;
	printf("Informe a ordem da matriz: ");
	scanf("%d",&x);
	
	geraMat(mt,x,x);
	mostraMat(mt,x,x);
	printf("\nA diagonal secundaria: \n");
	j=x;
	for(i=0; i<x; i++){
		j--;		
		printf("%d |",mt[i][j]);
		soma=soma+mt[i][j];
			
		}				
	
	printf("\n");
	printf("Soma da diagonal secundaria: %d\n",soma);


	system("pause");
	return 0;
}
