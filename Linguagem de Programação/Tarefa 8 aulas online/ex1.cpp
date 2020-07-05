#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;
double saldoM, saldoF, mediaF, mediaM;
int contM, contF;
string lerSexo();
double lerSalario();
void calc(string sexo, double salario);
void exibir();

int main(){
	string sexo;
	char tecla;
	double salario;
	setlocale(LC_ALL, "Portuguese");
	Menu:
		system("cls");
		cout << "---------- M E N U ----------\n\n1) Ler e calcular\n2) Exibir\n3) Sair\n";
		tecla = getch();
		system("cls");
		switch(tecla){
			case '1':
				sexo = lerSexo();
				salario = lerSalario();
				calc(sexo, salario);
				break;
			case '2':
				exibir();
				break;
			case '3':
				exit(0);
			default:
				cout << "Opção inválida!\n\n";
				system("pause");
		}
	goto Menu;
}

string lerSexo(){
	string sexo;
	cout << "Informe seu sexo (F/M): ";
	cin >> sexo;
	return sexo; 
}

double lerSalario(){
	double salario;
	cout << "Informe seu salário: ";
	cin >> salario;
	return salario;
}

void calc(string sexo, double salario){
	if(sexo == "M" || sexo == "m"){
		saldoM += salario;
		contM++;
		mediaM = saldoM/contM;
	}
	else if(sexo == "f" || sexo == "F"){
		saldoF += salario;
		contF++;
		mediaF = saldoF/contF;
	}
	else{
		cout << "Sexo inválido, digite novamente!\n\n";
		system("pause");
	}
}

void exibir(){
	cout << fixed << "Saldo total salário masculino: R$ " << setprecision(2) << saldoM << "\nMédia salário masculino: R$ " << setprecision(2) << mediaM << "\n\nSaldo total salário feminino: R$ " << setprecision(2) << saldoF << "\nMédia salário feminino: R$ " << setprecision(2) << mediaF << "\n\n";
	system("pause");
}
