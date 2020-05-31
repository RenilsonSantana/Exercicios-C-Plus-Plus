#include <iostream>
#include <math.h>
#include <clocale>
#include <cstdlib>
using namespace std;
lerA(){
	int a;
	cout << "Digite o valor de A: ";
	cin >> a;
	return a;
}

lerB(){
	int b;
	cout << "Digite o valor de B: ";
	cin >> b;
	return b;
}

lerC(){
	int c;
	cout << "Digite o valor de C: ";
	cin >> c;
	return c;
}

somaDasPotencias(int a, int b, int c){
	return (pow(a, 2) + pow(b, 2) + pow(c, 2));
}

exibir(int resultado){
	setlocale(LC_ALL, "Portuguese");
	cout << "A soma do quadrado de todos os valores digitados é igual a " << resultado << "\n\n";
}

int main(){
	int a, b, c, resultado;
	a = lerA();
	b = lerB();
	c = lerC();
	resultado = somaDasPotencias(a, b, c);
	exibir(resultado);
	system("pause");
}
