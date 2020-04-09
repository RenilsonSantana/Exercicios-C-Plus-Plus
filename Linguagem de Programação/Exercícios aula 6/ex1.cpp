#import <iostream>
#import <locale.h>
#import <stdlib.h>
#import <math.h>
#import <conio.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	char executar;
	float delta, x1, x2;
	Repetir:
		system("cls");
		cout << "-------------------------M E N U-----------------------------\n\n1) EXECUTAR\n2) FINALIZAR\n";
		executar = getch();
		system("cls");
		switch(executar){
			case '1':
				cout << "Digite o valor de A: ";
				cin >> a;
				cout << "Digite o valor de B: ";
				cin >> b;
				cout << "Digite o valor de C: ";
				cin >> c;
				system("cls");
				delta = pow(b, 2) -4*a*c;
				if(delta >= 0){
					x1 = (-b + sqrt(delta)) / (a*2);
					x2 = (-b - sqrt(delta)) / (a*2);
					cout << "A = " << a << "\nB = " << b << "\nC = " << c << "\nDelta = " << delta << "\nX1 = " << x1 << "\nX2 = " << x2 << "\n\n";
				}
				else{
					cout << "Sem solução no conjunto dos números Reais!\n" << "A = " << a << "\nB = " << b << "\nC = " << c << "\nDelta = " << delta << "\n\n";
				}
				break;
			case '2':
				exit(0);
			default:
				goto Repetir;
		}
		system("pause");
	goto Repetir;
}
