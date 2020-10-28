#include<stdio.h>
#include<stdlib.h>
#include "bbmt.h"
int main(){
	int mt[100][100],n,m,i,j,par=0,imp=0;
	printf("Informe a quantidade de linhas da matriz: ");
	scanf("%d",&n);
	printf("Informe a quantidade de colunas da matriz: ");
	scanf("%d",&m);
	leiaMat(mt,n,m);
	mostraMat(mt,n,m);
		
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if(mt[i][j]%2 == 0){
				par++;
			} else 
			imp++;
			}
		}				
	
	printf("Quantidade de numeros pares: %d\n",par);
	printf("Quantidade de numeros impares: %d\n",imp);


	system("pause");
	return 0;
}
