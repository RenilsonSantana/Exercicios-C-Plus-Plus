#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
using namespace std;
double lerValor();
int lerAtraso();
double calcMulta(double valor);
double calcJuros(int dias, double valor);
double valorPagar(double valor, double multa, double juros);
void exibir(double valor, double multa, double juros, double valorTot, int atraso);

int main(){
	double valor, multa, juros, valorTotal;
	int diasAtraso;
	char tecla;
	setlocale(LC_ALL, "Portuguese");
	do{
		system("cls");
		cout << "--------------- M E N U ---------------\n\n1) Ler valores\n2) Calcular\n3) Exibir\n4) Sair\n";
		tecla = getch();
		switch(tecla){
			case '1':
				system("cls");
				valor = lerValor();
				diasAtraso = lerAtraso();
				break;
			case '2':
				system("cls");
				multa = calcMulta(valor);
				juros = calcJuros(diasAtraso, valor);
				valorTotal = valorPagar(valor, multa, juros);
				cout << "\nValores Calculados!\n\n";
				system("pause");
				break;
			case '3':
				system("cls");
				exibir(valor, multa, juros, valorTotal, diasAtraso);
				system("pause");
				break;
			case '4':
				exit(0);
		}
	}while(tecla != 4);
}

double lerValor(){
	double valor;
	cout << "Digite o valor do produto: ";
	cin >> valor;
	return valor;
}

int lerAtraso(){
	int dias;
	cout << "Digite quantos dias a prestação está atrasada: ";
	cin >> dias;
	return dias;
}

double calcMulta(double valor){
	double multa;
	multa = valor * 0.02;
	return multa;
}

double calcJuros(int dias, double valor){
	double porcjuros, juros;
	porcjuros = dias * 0.000333;
	juros = valor * porcjuros;
	return juros;
}

double valorPagar(double valor, double multa, double juros){
	double total;
	total = valor + multa + juros;
	return total;
}

void exibir(double valor, double multa, double juros, double valorTot, int atraso){
	cout << fixed << "Valor: R$ " << setprecision(2) << valor << "\nDias de Atraso: " << atraso << " dias\nMulta: R$ " << setprecision(2) << multa << "\nJuros: R$ " << setprecision(2) << juros << "\nValor Total: R$ " << setprecision(2) << valorTot << "\n\n";
}
