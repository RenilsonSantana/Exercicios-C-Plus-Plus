#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int nasc, permissao;
	Repetir:
	cout << "Digite o seu ano de nascimento: ";
	cin >> nasc;
	permissao = 2020 - nasc;
	if(permissao >= 16)
		cout << "Você tem permissão para votar!\n\n";
	else 
		cout << "Você não tem permissão para votar!\n\n";
	system("pause");
	goto Repetir;
}
