#import <iostream>
#import <locale.h>
#import <stdlib.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, diferenca;
	Repita:
		system("cls");
		cout << "Digite um número: ";
		cin >> num1;
		cout << "Digite outro número: ";
		cin >> num2;
		if(num1 > num2)
			diferenca = num1 - num2;
		else if(num2 > num1)
			diferenca = num2 - num1;
		else
			diferenca = 0;
		cout << "A diferença de um número para o outro é de: " << diferenca << "\n\n";
		system("pause");
	goto Repita;
}
