#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	
	char pal[99],aux[99];
	int i,j=0;
	
	printf("Digite uma palavra ou frase: ");
	setbuf(stdin,NULL);

	gets(pal);
	
	
 for(i=(strlen(pal)-1); i>=0; i--){
 	
 	aux[j] = pal[i];
 	j++;	
 }
	aux[j]=0;
	
	printf("Vetor invertida: %s\n",aux);
	
	system("pause");
	return 0;
	
}
