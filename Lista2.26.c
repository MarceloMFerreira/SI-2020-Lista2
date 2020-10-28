#include<stdio.h>
#include<stdlib.h>
#include "bbmt.h"
int main(){
	int mt[100][100],x;
	printf("Informe n: ");
	scanf("%d",&x);

	geraMat(mt,x,x);
	mostraMat(mt,x,x);

	system("pause");
	return 0;
}
