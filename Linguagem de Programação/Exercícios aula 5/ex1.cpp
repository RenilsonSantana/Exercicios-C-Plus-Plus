#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	Repetir:
	cout << "Digite um número: ";
	cin >> n1;
	cout << "Digite outro número: ";
	cin >> n2;
	system("cls");
	if(n1 == n2){
		cout << "Números iguais!";
		goto Repetir;
	}
	else if(n1 > n2)
		cout << n1 << " foi o maior valor digitado!\n\n";
	else 
		cout << n2 << " foi o maior valor digitado!\n\n";
	system("pause");
}
