//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//treino adi��o
	int n1 = 10;
	int n2 = 10;
	int s1 = n1 + n2;
	printf("\n A soma entre %d + %d � igual a = %d e se eu tirar 5 fica = %d",n1 , n2, s1, abs(5 - s1));
	
	//treino Subtra��o
	int su1 = 8;
	int su2 = 20;
	int ssu = 20 - 8;
	printf("\n A soma entre %d - %d � igual a = %d e se eu colocar mais 5 fica = %d",su1 , su2, ssu, abs(5 + ssu));
	
	//treino divis�o
	int d1 = 6;
	int d2 = 3;
	int sd = 6 / 3;
	printf("\n A soma entre %d � %d � igual a = %d e se colocar mais 5 e tirar 3 fica = %d",d1 , d2, sd, abs((sd + 5) - 3));
	
	//Multiplica��o
	int mu1 = 5;
	int mu2 = 5;
	int mus = 5 * 5;
	printf("\n A soma entre %d x %d � igual a = %d e dividir por 5 da %d",mu1 , mu2, mus, abs(mus / 5));

	//treino m�dia
	float m1 = 7.20;
	float m2 = 5.30;
	float ms = (m1 + m2)/2;
	printf("\n a media � = %f",ms);
	
	//Resto da divis�o
	int a = 6, b = 3;
	printf("\n o resto da divis�o entre %d e %d � igual a = %d",a , b, a % b);
	
	//Valor absoluto
	printf("\n O valor absoluto de -3 = %d", abs(-3));		
		
	//Pausa o programa apos a execu��o
	system("pause");
}

