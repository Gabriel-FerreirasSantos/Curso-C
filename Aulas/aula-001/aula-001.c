#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Imprime Ol�
	printf("Ol�, Mundo \n");
	
	//int
	int a = 5;
	printf("O valor de a � = %d \n", a);
	scanf("%d", &a);	
	printf("O valor de a mudou para %d \n", a);
		
	
	//float
	float b = 5.9;
	printf("O valor de b � = %f \n", b);
	scanf("%f", &b);	
	printf("O valor de s mudou para %f \n", b);

	//char
	char c = 'oi';
	printf("O valor de c � = %c \n", c);
	fflush(stdin);
	scanf("%c", &c);	
	printf("O valor de c mudou para %c \n", c);
}

