#include "iostream"
#include "cstdlib"
#include "locale.h"
using namespace std;
double lerbase();
double leraltura();
double calcarea(double base, double altura);
double calcular_Media(double aux, double cont);
void exibir(double base, double altura, double area, double media);

int main(){
	double base, altura, area, saldo, mediaA;
	int tecla = 0, cont;
	setlocale(LC_ALL, "Portuguese");
	while(tecla != 4){
	    system("cls");
		cout << "menu\n1 Ler                  \n2 Calcular                  \n3 Exibir\n4 Sair\n\nItem:";
		cin >> tecla;
		if(tecla == 1){
			system("cls");
			base=lerbase();
			altura=leraltura();
		}
		else if(tecla == 2){
			system("cls");
			area=calcarea(base,altura);
			cont++;
			saldo += area;
			mediaA = calcular_Media(saldo, cont);
			cout << "\nCálculo bem sucedido!\n\n";
			system("pause");
		}
		else if(tecla ==3){
			system("cls");
			exibir(base, altura, area, mediaA);
		}
	}// fim while
	cout << "\nPrograma finalizado!\n";
	system("pause");
	return 0;
}

double lerbase(){
	double base;
	cout << "Ler Base:";
	cin >> base;
	return base;
}

double leraltura(){
	double altura;
	cout << "Ler Altura:";
	cin >> altura;
	return altura;
}

double calcarea(double base, double altura){
	double area;
	area = (base * altura)/2;
	return area;
}

double calcular_Media(double aux, double cont){
	double media;
	media = aux/cont;
	return media;
}

void exibir(double base, double altura, double area, double media){
    system("cls");
	cout << "Base..: " << base;
	cout << "\nAltura: " << altura;
	cout << "\nArea..: " << area << "\nMédia.: " << media << "\n\n";
	system("pause");
}
