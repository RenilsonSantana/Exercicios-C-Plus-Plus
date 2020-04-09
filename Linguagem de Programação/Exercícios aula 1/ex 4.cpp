#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float prestacao, valor;
	int tempo, taxa;
	cout << "Insira o valor do produto: R$";
	cin >> valor;
	cout << "Vai parcelar o pagamento em quantas vezes?\n";
	cin >> tempo;
	cout << "a taxa do pagamento é de quanto por cento? \n";
	cin >> taxa;
	prestacao = valor+(valor*taxa/100)*tempo;
	cout << "O valor final do produto é de R$ " << prestacao << "\n\n";
	system("pause");
}
