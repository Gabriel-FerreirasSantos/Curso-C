//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Definindo variaveis
	int a = 6, b = 3;
	
	//adi��o
	printf("\n A adi��o de %d e %d � igual a = %d",a , b, a + b);
	
	//Subtra��o
	printf("\n A Subtra��o de %d e %d � igual a = %d",a , b, a - b);
	
	//divis�o
	printf("\n A divis�o de %d e %d � igual a = %d",a , b, a / b);
	
	//Multiplica��o
	printf("\n A Multiplica��o de %d e %d � igual a = %d",a , b, a * b);
	
	//Valor absoluto
	printf("\n O valor absoluto de -3 = %d", abs(-3));
	
	//Resto da divis�o
	printf("\n o resto da divis�o entre %d e %d � igual a = %d",a , b, a % b);
	
	//Pausa o programa apos a execu��o
	system("pause");
}

