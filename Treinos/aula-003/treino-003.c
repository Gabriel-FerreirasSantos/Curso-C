//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//definindo Vari�veis
	int b = 160;
	
	//condicional composta
	if(b >= 1000){
		printf("\n O senhor(a) est� louco? multa na hora sem carteira sem carro sem nada");
	}else if(b >= 300 && b <= 999){
		printf("\n O senhor(a) est� de palha�ada n�? multado perde a habilita��o e o carro");
	}else if(b >= 190 && b <= 299){
		printf("\n O senhor(a) est� com a velocidade auticima multado! sem carro");
	}else if(b <= 189 && b >= 160){
		printf("\n O senhor(a) est� acima da velocidade permitida multado");
	}else if(b <= 159){
		printf("\n Dirija com cuidado");
	}

	//Pausa o programa apos a execu��o
	system("pause");
}

