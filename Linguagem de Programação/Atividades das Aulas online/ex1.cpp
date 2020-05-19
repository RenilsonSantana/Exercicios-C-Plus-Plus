#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int v1, v2, v3, v4, v5;
	cout << "Digite 5 valores: ";
	cin >> v1 >> v2 >> v3 >> v4 >> v5;
	cout << "Multiplos de 2 e 4: ";
	if(v1%2 == 0 && v1%4 == 0)
		cout << v1 << " ";
	if(v2%2 == 0 && v2%4 == 0)
		cout << v2 << " ";
	if(v3%2 == 0 && v3%4 == 0)
		cout << v3 << " ";
	if(v4%2 == 0 && v4%4 == 0)
		cout << v4 << " ";
	if(v5%2 == 0 && v5%4 == 0)
		cout << v5 << " ";
	cout << "\n";
	system("pause");
}
