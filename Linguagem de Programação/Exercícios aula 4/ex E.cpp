#import <iostream>
#import <locale.h>
#import <stdlib.h>
#import <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	float delta, x1, x2;
	Repitir:
		system("cls");
		cout << "Digite o valor de A: ";
		cin >> a;
		cout << "Digite o valor de B: ";
		cin >> b;
		cout << "Digite o valor de C: ";
		cin >> c;
		delta = pow(b, 2) -4*a*c;
		x1 = (-b + sqrt(delta)) / (a*2);
		x2 = (-b - sqrt(delta)) / (a*2);
		cout << "As raizes da equação são: " << x1 << " e " << x2 << "\n\n";
		system("pause");
	goto Repitir;
}
