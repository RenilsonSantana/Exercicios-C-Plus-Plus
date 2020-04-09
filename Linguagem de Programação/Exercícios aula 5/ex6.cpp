#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	float pesoIdeal, altura;
	Repetir:
	system("cls");
	cout << "Digite seu sexo (F/M): ";
	cin >> sexo;
	fflush(stdin);
	cout << "Digite sua altura: ";
	cin >> altura;
	fflush(stdin);
	if(sexo == 'F' || sexo == 'f')
		pesoIdeal = (62.1 * altura) - 44.7;
	else if(sexo == 'm'|| sexo == 'M')
		pesoIdeal = (72.7 * altura) - 58;
	else{
		cout << "SEXO INVÁLIDO!\n\n";
		system("pause");
		goto Repetir;
	}
	cout << "O seu peso ideial é " << pesoIdeal << "\n\n";
	system("pause");
}
