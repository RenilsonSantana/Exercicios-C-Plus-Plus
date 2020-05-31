#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y, aux;
	cout << "Digite o valor de X: ";
	cin >> x;
	cout << "Digite o valor de Y: ";
	cin >> y;
	system("cls");
	cout << "X = " << x << "\nY = " << y << "\n\n";
	system("pause");
	aux = x;
	x = y;
	y = aux;
	system("cls");
	cout << "X = " << x << "\nY = " << y << "\n";
	system("pause");
}
