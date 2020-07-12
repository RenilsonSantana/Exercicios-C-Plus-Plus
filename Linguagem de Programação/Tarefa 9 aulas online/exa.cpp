#include <iostream> 
#include <cstdlib>
#include <locale.h>
using namespace std;
int soma(int x, int y);
void mostrar (int n1, int n2);

int main (){
	setlocale(LC_ALL, "Portuguese" );
	int n1=1, n2 = 50; 
	mostrar (n1 , n2);
}

int soma(int x, int y){
	int R=0, resto1, resto2;
	for (int i =x; i<=y; i++){
		resto1 = i % 3;
		resto2 = i % 4;
 		if (resto1 == 0 && resto2 == 0){ 
			R += i;
			cout << "R= " << R << endl;
		}
	}
	return R; 
}

void mostrar (int n1, int n2){
	int result = soma(n1,n2);
	cout<< "\nSomatório dos divisíveis por 3 e 4 de "<< n1<< " até "<< n2<< "=";
	cout << result << endl;
	system("pause"); 
}
