//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//treino adição
	int n1 = 10;
	int n2 = 10;
	int s1 = n1 + n2;
	printf("\n A soma entre %d + %d é igual a = %d e se eu tirar 5 fica = %d",n1 , n2, s1, abs(5 - s1));
	
	//treino Subtração
	int su1 = 8;
	int su2 = 20;
	int ssu = 20 - 8;
	printf("\n A soma entre %d - %d é igual a = %d e se eu colocar mais 5 fica = %d",su1 , su2, ssu, abs(5 + ssu));
	
	//treino divisão
	int d1 = 6;
	int d2 = 3;
	int sd = 6 / 3;
	printf("\n A soma entre %d ÷ %d é igual a = %d e se colocar mais 5 e tirar 3 fica = %d",d1 , d2, sd, abs((sd + 5) - 3));
	
	//Multiplicação
	int mu1 = 5;
	int mu2 = 5;
	int mus = 5 * 5;
	printf("\n A soma entre %d x %d é igual a = %d e dividir por 5 da %d",mu1 , mu2, mus, abs(mus / 5));

	//treino média
	float m1 = 7.20;
	float m2 = 5.30;
	float ms = (m1 + m2)/2;
	printf("\n a media é = %f",ms);
	
	//Resto da divisão
	int a = 6, b = 3;
	printf("\n o resto da divisão entre %d e %d é igual a = %d",a , b, a % b);
	
	//Valor absoluto
	printf("\n O valor absoluto de -3 = %d", abs(-3));		
		
	//Pausa o programa apos a execução
	system("pause");
}

