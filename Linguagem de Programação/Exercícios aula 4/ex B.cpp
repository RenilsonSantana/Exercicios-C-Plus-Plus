#import <iostream>
#import <locale.h>
#import <stdlib.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, modulo;
	Repita:
		system("cls");
		cout << "Digite um número: ";
		cin >> num;
		if(num < 0)
			modulo = num * (-1);
		else
			modulo = num;
		cout << "O módulo de " << num << " é igual a " << modulo << "\n\n";
		system("pause");
	goto Repita;
}
