#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, aux1, aux2, aux3;
	Repetir:
		system("cls");
		cout << "Digite um número: ";
		cin >> n1;
		cout << "Digite outro número: ";
		cin >> n2;
		cout << "Digite mais um número: ";
		cin >> n3;
		if(n1 == n2 || n1 == n3 || n2 == n3){
			cout << "Favor digitar números diferentes!\n\n";
			system("pause");
			goto Repetir;
		}
		else if(n1 < n2 && n1 < n3){
			aux1 = n1;
			if(n2 < n3){
				aux2 = n2;
				aux3 = n3;
			}
			else{
				aux2 = n3;
				aux3 = n2;
			}
		}
		else if(n2 < n1 && n2 < n3){
			aux1 = n2;
			if(n1 < n3){
				aux2 = n1;
				aux3 = n3;
			}
			else{
				aux2 = n3;
				aux3 = n1;
			}
		}
		else{
			aux1 = n3;
			if(n1 < n2){
				aux2 = n1;
				aux3 = n2;
			}
			else{
				aux2 = n2;
				aux3 = n1;
			}
		}
		cout << "A ordem crescente dos números digitados é " << aux1 << " " << aux2 << " " << aux3 << "\n\n";
		system("pause");
	goto Repetir;
}
