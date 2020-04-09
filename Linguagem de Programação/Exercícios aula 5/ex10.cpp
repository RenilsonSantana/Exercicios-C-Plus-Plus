#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ang1, ang2, ang3, aux;
	string msg;
	Repetir:
		system("cls");
		cout << "Digite o 1º ângulo do triângulo: ";
		cin >> ang1;
		cout << "Digite o 2º ângulo do triângulo: ";
		cin >> ang2;
		cout << "Digite o 3º ângulo do triângulo: ";
		cin >> ang3;
		aux = ang1 + ang2 + ang3;
		if(aux != 180){
			system("cls");
			cout << "A soma dos ângulos informados é diferente de 180, entretanto não representa um triângulo!\n\n";
			system("pause");
			goto Repetir;
		}
		else if(ang1 == 90 || ang2 == 90 || ang3 == 90)
			msg = "TRIÂNGULO RETÂNGULO!";
		else if(ang1 > 90 || ang2 > 90 || ang3 > 90)
			msg = "TRIÂNGULO OBSTUSÂNGULO!";
		else 
			msg = "TRIÂNGULO ACUTÂNGULO!";
		cout << msg << "\n\n";
		system("pause");
	goto Repetir;
}
