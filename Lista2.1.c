#include <stdio.h>
#include <stdlib.h>
#include "bbvt.h"

int main(){
	int numeros[100], n, i, soma=0, op;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	if(op==1)
		geraVet(numeros,n);
	else
		leiaVet(numeros,n);	
	mostraVet(numeros,n);
	for(i=0;i<n;i++)
       soma+= numeros[i];	// soma = soma + numeros[i];
	   	
	printf("Soma do vetor:%d\n",soma);
	
	system("pause");
	return 0;
}
