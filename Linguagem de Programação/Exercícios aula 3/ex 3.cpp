#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;
    string status;
    char c;
    bool continuar;
    Repetir:
    system("cls");
    cout << "Digite sua primeira nota: ";
    cin >> n1;
    cout << "Digite sua segunda nota: ";
    cin >> n2;
    system("cls");
    media = (n1+n2)/2;
    if(media < 3)
        status = "REPROVADO DIRETO!";
    else if(media >= 3 && media < 5)
        status = "ALUNO DE RECUPERAÇÃO!";
    else if(media >= 5 && media < 6)
        status = "ALUNO DE EXAME!";
    else
        status = "ALUNO APROVADO!";
    cout << "Media = " << media << "\nStatus = " << status << "\n\n";
    cout << "Deseja continuar (S/N)? \n\n";
    cin >> c;
    if(c == 's' || c == 'S')
         continuar = true;
    else 
         continuar = false;
    if(continuar == false)
         exit(0);
    goto Repetir;
    system("pause");
}
