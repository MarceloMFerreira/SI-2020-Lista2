#include<stdio.h>
#include<stdlib.h>
#include"bbvt.h"
int main(){
	int v[100],n,val,op,op1,i;
	
	printf("Informe a quantidade de elementos no vetor: ");
	scanf("%d",&n);
	printf("Digite um numero: ");
	scanf("%d",&val);
	
	geraVet(v,n);
	
	for(i=0; i<n; i++){
		if(val == v[i]){
			op=1;
			op1=i;
			break;
		}
	}	
	if(op == 1){
		printf("O numero %d esta na posicao %d do vetor!\n",val,op1);
	} else 
	printf("O numero %d nao esta no vetor!\n",val);
	
	printf("\n");
	mostraVet(v,n);
	
	
	system("pause");
	return 0;
}
