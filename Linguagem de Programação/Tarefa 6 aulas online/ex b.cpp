#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>
#include <locale.h>
#include <iomanip>
using namespace std;
double lerA();
double lerB();
double lerC();
double cal_S(double a, double b, double c);
double cal_Ah(double a, double b, double c, double s);
void exibir(double a, double b, double c, double s, double ah);

int main(){
	setlocale(LC_ALL, "Portuguese");
	char tecla = 0;
	double a, b, c, s, ah;
	Menu:
		system("cls");
		cout << "MENU\n1) Ler\n2) Calcular\n3) Exibir\n4) Sair\n";
		tecla = getch();
		if(tecla == '1'){
			system("cls");
			a = lerA();
			b = lerB();
			c = lerC();
			cout << "Valores registrados com sucesso!\n\n";
			system("pause");
		}
		else if(tecla == '2'){
			system("cls");
			s = cal_S(a, b, c);
			ah = cal_Ah(a, b, c, s);
			cout << "Valores calculado!\n\n";
			system("pause");
		}
		else if(tecla == '3'){
			system("cls");
			exibir(a, b, c, s, ah);
			system("pause");
		}
		else if(tecla == '4'){
			exit(0);
		}
		else{
			cout << "Opção invalida!\n\n";
			system("pause");
		}
		goto Menu;
}

double lerA(){
	double va;
	cout << "Digite A: ";
	cin >> va;
	return va;
}

double lerB(){
	double vb;
	cout << "Digite B: ";
	cin >> vb;
	return vb;
}

double lerC(){
	double vc;
	cout << "Digite C: ";
	cin >> vc;
	return vc;
}

double cal_S(double a, double b, double c){
	double s;
	s = (a+b+c)/2;
	return s;
}

double cal_Ah(double a, double b, double c, double s){
	double ah;
	ah = sqrt(s * (s-a) * (s-b) * (s-c));
	return ah;
}

void exibir(double a, double b, double c, double s, double ah){
	cout << fixed << "Valor de A: " << setfill(' ') << setw(8) << setprecision(2) << a << "\nValor de B: " << setfill(' ') << setw(8) << setprecision(2) << b << "\nValor de C: " << setfill(' ') << setw(8) << setprecision(2) << c << "\nValor de S: " << setfill(' ') << setw(8) << setprecision(2) << s << "\nValor de AH: " << setfill(' ') << setw(7) << setprecision(2) << ah << "\n\n";
}
