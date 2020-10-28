#include<stdio.h>
#include<stdlib.h>
#include "bbvt.h"
int main(){
	int n,v[100],fc[6],i;
	printf("Informe a quantidade de vezes que o dado foi lancado: ");
	scanf("%d",&n);
	
	printf("Informe os resultados dos lancamentos: \n");
	leiaVet(v,n);
	
	for(i=0; i<6; i++){
		fc[i]=0;
	}
	
	for(i=0; i<n; i++){
		if(v[i] == 1){
			fc[0]++;
		} else if(v[i] == 2){
			fc[1]++;
		} else if(v[i] == 3){
			fc[2]++;
		} else if(v[i] == 4){
			fc[3]++;
		} else if(v[i] == 5){
			fc[4]++;
		} else if(v[i] == 6){
			fc[5]++;
		}
	}
	for(i=0; i<6; i++){
		printf("A face %d apareceu %d vezes!\n",i+1,fc[i]);
	}
	
	
	
	system("pause");
	return 0;
}
