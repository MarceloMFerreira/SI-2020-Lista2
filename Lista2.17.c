#include<stdio.h>
#include<stdlib.h>
#include "bbvt.h"
int main(){
	float n[5],maior=0,menor,s;
	int i;
	
	printf("Informe as notas: \n");
	
	for(i=0; i<5; i++){
		scanf("%f",&n[i]);
		s=s+n[i];
	}
	menor=n[0];
	
	for(i=0; i<5; i++){
		if(n[i]>maior){
			maior = n[i];
		} else if(n[i]<menor){
			menor=n[i];
		}
	}
	printf("%.1f\n",s-maior-menor);
	


	system("pause");
	return 0;
}
