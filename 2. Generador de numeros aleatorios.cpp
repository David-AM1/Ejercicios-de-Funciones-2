#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
	int numero, maximo, cantidad;
	cout << "Ingrse la cantidad de numeros aleatorios a generar: ";
	cin >> cantidad;
	cout << "Ingrese el limite maximo: ";
	cin >> maximo;
	for(int i=1;i<=cantidad;i++) {
	numero = 0 + rand() % maximo;
    cout << numero << endl;
	}
	return 0;
}