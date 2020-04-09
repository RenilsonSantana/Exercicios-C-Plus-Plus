#include <iostream>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float diametro, perimetro, raio, area;
	cout << "Digite o perimetro: ";
	cin >> perimetro;
	diametro = perimetro/PI;
	raio = diametro/2;
	area = raio * raio * PI;
	cout << "A area do circo é " << area << "\n\n";
	system("pause");
}
