#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, base, area;
	cout << "Digite a base do triângulo: ";
	cin >> base;
	cout << "Digite altura do triângulo: ";
	cin >> altura;
	area = base * altura/2;
	cout << "A área do triângulo é igual a " << area << "\n\n";
	system("pause");
}
