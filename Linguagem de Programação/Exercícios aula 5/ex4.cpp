#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int nMaca;
	float total;
	Repetir:
	cout << "Digite o números de maçãs que deseja comprar: ";
	cin >> nMaca;
	if(nMaca >= 12)
		total = nMaca * 0.25;
	else
		total = nMaca * 0.30;
	cout << "\nVocê comprou " << nMaca << " Maçãs e o total da compra é de " << total << "R$\n\n";
	system("pause");
	goto Repetir;
}
