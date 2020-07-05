#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;
int cMaior, cMenor;
double maiorSal_maior=0, maiorSal_menor=0, menorSal_maior=0, menorSal_menor=0;
int lerIdade();
double lerSalario();
void calc(int idade, double salario);
void exibir();

main(){
	int idade;
	double salario;
	char menu;
	setlocale(LC_ALL, "Portuguese");
	Menu:
		system("cls");
		cout << "---------- M E N U ----------\n\n1) Ler e calcular\n2) Exibir\n3) Sair\n";
		menu = getch();
		system("cls");
		switch(menu){
			case '1':
				idade = lerIdade();
				salario = lerSalario();
				calc(idade, salario);
				break;
			case '2':
				exibir();
				break;
			case '3':
				exit(0);
		}
	goto Menu;
}

int lerIdade(){
	int idade;
	cout << "Digite sua idade: ";
	cin >> idade;
	return idade;
}

double lerSalario(){
	double salario;
	cout << "Informe seu salário: ";
	cin >> salario;
	return salario;
}

void calc(int idade, double salario){
	if(idade >= 18){
		cMaior++;
		if(salario > maiorSal_maior){
			maiorSal_maior = salario;
		}
		if(salario < menorSal_maior || menorSal_maior == 0){
			menorSal_maior = salario;
		}
	}
	else{
		cMenor++;
		if(salario > maiorSal_menor){
			maiorSal_menor = salario;
		}
		if(salario < menorSal_menor || menorSal_menor == 0){
			menorSal_menor = salario;
		}
	}
}

void exibir(){
	cout << fixed << "----------MAIOR DE IDADE----------\n\nMaiores de idade registrados: " << cMaior << "\nMaior Salário: R$ " << setprecision(2) << maiorSal_maior << "\nMenor Salário: R$ " << setprecision(2) << menorSal_maior << "\n\n\n----------MENOR DE IDADE----------\n\nMenores de idade registrados: " << cMenor << "\nMaior Salário: R$ " << setprecision(2) << maiorSal_menor << "\nMenor Salário: R$ " << setprecision(2) << menorSal_menor << "\n\n";
	system("pause"); 
}
