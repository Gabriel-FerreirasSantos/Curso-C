//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//Definindo variaveis
	int a = 6, b = 3;
	
	//adição
	printf("\n A adição de %d e %d é igual a = %d",a , b, a + b);
	
	//Subtração
	printf("\n A Subtração de %d e %d é igual a = %d",a , b, a - b);
	
	//divisão
	printf("\n A divisão de %d e %d é igual a = %d",a , b, a / b);
	
	//Multiplicação
	printf("\n A Multiplicação de %d e %d é igual a = %d",a , b, a * b);
	
	//Valor absoluto
	printf("\n O valor absoluto de -3 = %d", abs(-3));
	
	//Resto da divisão
	printf("\n o resto da divisão entre %d e %d é igual a = %d",a , b, a % b);
	
	//Pausa o programa apos a execução
	system("pause");
}

