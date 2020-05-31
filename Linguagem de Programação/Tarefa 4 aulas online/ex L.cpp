#include <iostream>
#include <math.h>
#include <clocale>
#include <cstdlib>
using namespace std;
int lerA();
int lerB();
int lerC();
int somaDasPotencias(int a, int b, int c);
void exibir(int resultado);

int main(){
	int a, b, c, resultado;
	a = lerA();
	b = lerB();
	c = lerC();
	resultado = somaDasPotencias(a, b, c);
	exibir(resultado);
	system("pause");
}

int lerA(){
	int a;
	cout << "Digite o valor de A: ";
	cin >> a;
	return a;
}

int lerB(){
	int b;
	cout << "Digite o valor de B: ";
	cin >> b;
	return b;
}

int lerC(){
	int c;
	cout << "Digite o valor de C: ";
	cin >> c;
	return c;
}

int somaDasPotencias(int a, int b, int c){
	return (pow(a, 2) + pow(b, 2) + pow(c, 2));
}

void exibir(int resultado){
	setlocale(LC_ALL, "Portuguese");
	cout << "A soma do quadrado de todos os valores digitados é igual a " << resultado << "\n\n";
}
