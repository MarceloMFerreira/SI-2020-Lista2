#include<stdio.h>
#include<stdlib.h>
#include "bbvt.h"
int main(){
	int v1[100],v2[100],vr[100],n,i,op;
	
	printf("Quantos elementos nos vetores: ");
	scanf("%d",&n);
	printf("[1] Gerar\n[2] Ler\n");
	scanf("%d",&op);
	
	if(op==1){
			geraVet(v1,n);
			geraVet(v2,n);
			
	} else{
	printf("Primeiro vetor: \n");
		leiaVet(v1,n);
	printf("Segundo vetor: \n");
		leiaVet(v2,n);
	}
	printf("VETOR RESULTANTE \n");
	for(i=0; i<n; i++){
		vr[i] = v1[i] * v2[i];
		
		printf("Posicao[%d]: %d x %d = %d\n",i,v1[i],v2[i],vr[i]);
		
	}
	
	system("pause");
	return 0;
}
