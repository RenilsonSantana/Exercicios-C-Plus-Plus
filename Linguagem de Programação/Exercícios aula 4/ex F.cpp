#import <iostream>
#import <locale.h>
#import <stdlib.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, p1, p2, p3;
	Repitir:
		system("cls");
		cout << "Digite o 1º número: ";
		cin >> a;
		cout << "Digite o 2º número: ";
		cin >> b;
		cout << "Digite o 3º número: ";
		cin >> c;
		if(a < b && a < c){
			p1 = a;
			if(b < c){
				p2 = b;
				p3 = c;
			}
			else{
				p2 = c;
				p3 = b;
			}
		}
		else if(b < a && b < c){
			p1 = b;
			if(a < c){
				p2 = a;
				p3 = c;
			}
			else{
				p2 = c;
				p3 = a;
			}
		}
		else{
			p1 = c;
			if(a < b){
				p2 = a;
				p3 = b;
			}
			else{
				p2 = b;
				p3 = a;
			}
		}
		cout << "A ordem crescente dos números digitados é: " << p1 << " " << p2 << " " << p3 << "\n\n";
		system("pause");
	goto Repitir;
}
