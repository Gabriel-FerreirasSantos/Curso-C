//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//definindo Vari�veis
	int a = 5;
	int b = 18;
	//Condicional Simples
	if(a == 5){
		printf("A variavel a = 5 ");
	}
	
	//numero par ou impar
	if(a % 2 == 1){
		printf("\n A variavel a e impar");
	}else{
		printf("\n A variavel a e par");
	}
	
	//condicional composta
	if(b == 17){
		printf("\n Voc� pode se preparar para tirar a carteira");
	}else if(b >= 18){
		printf("\n Voc� ja pode tirar a carteira");
	}else if(b <= 16){
		printf("\n Voc� � muito novo ainda");
	}

	//Pausa o programa apos a execu��o
	system("pause");
}

