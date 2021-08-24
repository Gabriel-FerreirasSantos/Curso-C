//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função principal do programa
void main(){
	
	//Permite usar acentos
	setlocale(LC_ALL,"");
	
	//definindo Variáveis
	int b = 160;
	
	//condicional composta
	if(b >= 1000){
		printf("\n O senhor(a) está louco? multa na hora sem carteira sem carro sem nada");
	}else if(b >= 300 && b <= 999){
		printf("\n O senhor(a) está de palhaçada né? multado perde a habilitação e o carro");
	}else if(b >= 190 && b <= 299){
		printf("\n O senhor(a) está com a velocidade auticima multado! sem carro");
	}else if(b <= 189 && b >= 160){
		printf("\n O senhor(a) está acima da velocidade permitida multado");
	}else if(b <= 159){
		printf("\n Dirija com cuidado");
	}

	//Pausa o programa apos a execução
	system("pause");
}

