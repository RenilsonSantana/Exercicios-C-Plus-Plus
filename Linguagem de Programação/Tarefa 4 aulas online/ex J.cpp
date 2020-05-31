#include <stdio.h>
#include <locale.h>
#include <cstdlib>
using namespace std;
float cotacaoDolar();
float lerDolar();
float conversaoParaReais(float cot, float valor);
void imprimir(float reais);

int main(){
	float cotacao, valorDolar, reais;
	cotacao = cotacaoDolar();
	valorDolar = lerDolar();
	reais = conversaoParaReais(cotacao, valorDolar);
	imprimir(reais);
	system("pause");
}

float cotacaoDolar(){
	float cotDolar;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite quanto está valendo 1 Dolar em R$: ");
	scanf("%f", &cotDolar);
	return cotDolar;
}

float lerDolar(){
	float dolar;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite quantos dolares você têm: ");
	scanf("%f", &dolar);
	return dolar;
}

float conversaoParaReais(float cot, float valor){
	return  valor*cot;
}

void imprimir(float reais){
	printf("Convertendo para Reais brasileiro, você têm R$ %.2f\n\n", reais);
}
