#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha;
	Repetir:
	cout << "Digite sua senha: ";
	cin >> senha;
	if(senha == 1234)
		cout << "ACESSO PERMITIDO!\n\n";
	else 
		cout << "ACESSO NEGADO!\n\n";
	system("pause");
	goto Repetir;
}
