//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Imprime Olá
	printf("Olá \n");
	
	//treino int
	int a1 = 10;	
	int a2 = 5;
	printf("O valor de a é = %d \n", a1);
	scanf("%d", &a1);	
	printf("O valor de %d mudou para %d \n", a1, a2);
		
	
	//treino float
	float b1 = 6.1;
	float b2 = 5.9;
	printf("O valor de colocado é = %f \n", b1);
	scanf("%f", &b1);	
	printf("O valor de anterior mudou para %f \n", b1 );


	//treino char
	char c1 = 'pneu';
	char c2 = 'testando';
	printf("O valor colocado é = %c \n", c1);
	fflush(stdin);
	scanf("%c", &c1);	
	printf("O valor de %c mudou para %c \n",c1 , c2);
	
}

