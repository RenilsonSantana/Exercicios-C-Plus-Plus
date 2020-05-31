#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int lerN1();
int lerN2();
int quadrado(int a, int b);
void imprimir(int r);

int main(){
	int a, b, r;
	a = lerN1();
	b = lerN2();
	r = quadrado(a, b);
	imprimir(r);
	system("pause");
}

int lerN1(){
	int n1;
	cout << "Digite o valor de n1: ";
	cin >> n1;
	return n1;
}

int lerN2(){
	int n2;
	cout << "Digite o valor de n2: ";
	cin >> n2;
	return n2;
}

int quadrado(int a, int b){
	int quad = pow((a - b), 2);
	return quad;
}

void imprimir(int r){
	cout << r << "\n\n";
}
