#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
    float c, f;
    cout << "Digite a temperatura em °C: ";
    cin >> c;
    f = (9*c+160)/5;
    cout << "\n\n" << c << "ºC é igual a " << f << "°F\n\n";
    system("pause");
}
