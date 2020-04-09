#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int main(){
    float distancia, tempo, velocidade, totalLitros;
    setlocale(LC_ALL, "Portuguese");
    cout << "Digite quanto tempo deviagem ate chegar ao destino: ";
    cin >> tempo;
    cout << "Digite a velocidade media da viagem: ";
    cin >> velocidade;
    distancia = tempo * velocidade;
    totalLitros = distancia/12;
    system("cls");
    cout << "A viagem durou:\n\n" << tempo << " Horas\n" << distancia << "Km\n" << velocidade << "Km/h\n" << totalLitros << " Litros\n\n";
    system("pause");
}
