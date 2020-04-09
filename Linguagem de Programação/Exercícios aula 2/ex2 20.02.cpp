#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float tempo, distancia;
	cout << "Digite o tempo do Raio: ";
	cin >> tempo;
	distancia = tempo * 340;
	cout << "A distância do Raio foi de " << distancia << "\n\n";
	system("pause");
}
