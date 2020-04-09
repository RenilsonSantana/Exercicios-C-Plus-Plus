#import <iostream>
#import <locale.h>
#import <cstdlib>
#import <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float area, medidaLado, alturaTriangulo, apotema;
	int lados;
	Repetir:
		system("cls");
		cout << "Digite quantos lados tem o Polígono Regular: ";
		cin >> lados;
		cout << "Digite a medida dos lados do Polígono Regular: ";
		cin >> medidaLado;
		if(lados == 3){
			alturaTriangulo = sqrt(pow(medidaLado, 2) - pow((medidaLado/2), 2));
			area = (alturaTriangulo * medidaLado) / 2;
			cout << "\n\nFigira Geometrica: Triângulho\nÁrea: " << area << "cm\n\n";
		}
		else if(lados == 4){
			area = medidaLado * medidaLado;
			cout << "\n\nFigira Geometrica: Quadrado\nÁrea: " << area << "cm\n\n";
		}
		else if(lados == 5){
			apotema = medidaLado / 1.453;
			area = 2.5 * medidaLado * apotema;
			cout << "\n\nFigira Geometrica: Pentágono\nÁrea: " << area << "cm\n\n";
		}
		else if(lados < 3){
			cout << "\n\nNão é um Polígono!\n\n";
			system("pause");
			goto Repetir;
		}
		else{
			cout << "\n\nPolígono não encontrado!\n\n";
			system("pause");
			goto Repetir;
		}
}
