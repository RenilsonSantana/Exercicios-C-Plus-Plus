#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, largura, compremento, volume;
	cout << "Informe a altura da caixa: ";
	cin >> altura;
	cout << "Informe a largura da caixa: ";
	cin >> largura;
	cout << "Informe o compremento da caixa: ";
	cin >> compremento;
	volume = altura*largura*compremento;
	cout << "O volume total da caixa é de " << volume << "\n\n";
	system("pause");
}
