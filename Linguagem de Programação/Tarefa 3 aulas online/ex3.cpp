#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano;
	char ex;
	string msg;
	Menu:
		system("cls");
		cout << "--------------- M E N U ---------------\n\n1)Executar\n2)Finalizar\n";
		ex = getch();
		switch(ex){
			case '1':
				system("cls");
				cout << "Digite um ano: ";
				cin >> ano;
				if(ano%4 == 0)
					msg = "O ano digitado é bissexto!\n\n";
				else
					msg = "O ano digitado não é bissexto!\n\n";
				break;
			case '2':
				exit(0);
			default:
				system("cls");
				cout << "OPÇÃO INVÁLIDA!\n\n";
				system("pause");
				goto Menu;
		}
		cout << msg;
		system("pause");
		goto Menu;
}
