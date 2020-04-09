#import <iostream>
#import <cstdlib>
#import <locale.h>
#import <conio.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	char tecla;
	bool triangulo = false;
	Repetir:
		system("cls");
		cout << "-------------------------M E N U-------------------------\n\n1) EXECUTAR\n2) FINALIZAR\n";
		tecla = getch();
		system("cls");
		switch(tecla){
			case '1':
				cout << "Digite o valor A: ";
				cin >> a;
				cout << "Digite o valor B: ";
				cin >> b;
				cout << "Digite o valor C: ";
				cin >> c;
				if(a < (b+c) && b < (a+c) && c < (a+b))
					triangulo = true;
				else
					triangulo = false;
				if(triangulo)
					cout << "Trata-se de um Triângulo!\n\n";
				else
					cout << "Uma figura qualquer de três lados.\n\n";
				break;
			case '2':
				exit(0);
				break;
			default:
				goto Repetir;
				break;
		}
		system("pause");
	goto Repetir;
}
