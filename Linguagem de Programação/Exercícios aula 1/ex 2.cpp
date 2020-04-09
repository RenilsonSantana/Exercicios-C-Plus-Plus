#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PI 3.14
using namespace std;
int main(){
     setlocale(LC_ALL, "Portuguese");
     float volume, raio, altura;
     cout << "Informe a altura da lata: ";
     cin >> altura;
     cout << "Informe o raio da lata";
     cin >> raio;
     volume = PI * pow(raio, 2) * altura; 
     cout << "o volume da lata é de: " << volume << "\n\n";
     system("pause");
}
