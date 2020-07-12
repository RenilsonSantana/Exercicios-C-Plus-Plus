#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <conio.h>
using namespace std;
int lern();
int calpar(int n);
int calimpar(int n);
void exibir(int n, int par, int impar);

int main(){
	setlocale(LC_ALL, "Portuguese");
	char tecla;
	int n, totpar, totimpar;
	while(tecla != '4'){
		system("cls");
		cout << "---------------MENU---------------\n\n1) Ler\n2) Calcular\n3) Exibir\n4) Sair\n\n";
		tecla = getch();
		switch(tecla){
			case '1':
				n = lern();
				break;
			case '2':
				totpar = calpar(n);
				totimpar = calimpar(n);
				break;
			case '3':
				exibir(n, totpar, totimpar);
		}
	}
}

int lern(){
	int n;
	cout << "Digite um número: ";
	cin >> n;
	return n;
}

int calpar(int n){
	int par = 0;
	for(int cont = 0; cont <= n; cont++){
		if(cont%2 == 0){
			par++;
		}
	}
	return par;
}

int calimpar(int n){
	int impar = 0;
	for(int cont = 0; cont <= n; cont++){
		if(cont%2 != 0){
			impar++;
		}
	}
	return impar;
}

void exibir(int n, int par, int impar){
	cout << "Número digitado: " << n << "\nContando de 0 ate " << n << " temos o total de: " << par << " números par!\nContando de 0 ate " << n << " temos o total de: " << impar << " números impares!\n\n";
	system("pause");
}
