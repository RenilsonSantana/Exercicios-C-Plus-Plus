#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define G 9.8
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, tg;
	cout << "Digite a altura: ";
	cin >> altura;
	tg = sqrt(2 * altura) / G;
	cout << "TG = " << tg << "\n\n";
	system("pause");
}
