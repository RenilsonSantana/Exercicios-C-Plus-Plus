#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <conio.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float ladoA, ladoB, ladoC, semiperimetro, area;
	char exe;
	string tipo;
	Repetir:
		system("cls");
		system("cls");
		cout << "-------------------------M E N U-------------------------\n\n1) EXECUTAR\n2) FINALIZAR\n";
		exe = getch();
		system("cls");
		switch(exe){
			case '1':
				cout << "Digite o lado A do triângulo: ";
				cin >> ladoA;
				cout << "Digite o lado B do triângulo: ";
				cin >> ladoB;
				cout << "Digite o lado C do triângulo: ";
				cin >> ladoC;
				system("cls");
				if(ladoA == ladoB && ladoA == ladoC)
					tipo = "Equilátero";
				else if(ladoA != ladoB && ladoA != ladoC && ladoB != ladoC)
					tipo = "Escaleno";
				else 
					tipo = "Isóceles";
				semiperimetro = (ladoA + ladoB + ladoC) / 2;
				area = sqrt(semiperimetro*(semiperimetro-ladoA)*(semiperimetro-ladoB)*(semiperimetro*ladoC));
				cout << "Lado A: " << ladoA << "\nLado B: " << ladoB << "\nLado C: " << ladoC << "\nTipo do Triângulo: " << tipo << "\nSemiperimetro: " << semiperimetro << "\nÁrea: " << area << "cm²\n\n";
				break;
			case '2':
				exit(0);
				break;
			default:
				goto Repetir;
		}
		system("pause");
	goto Repetir;
}
