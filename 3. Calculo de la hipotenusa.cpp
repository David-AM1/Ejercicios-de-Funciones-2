#include <iostream>
#include <cmath>
using namespace std;

 int main() {
 	int cateto1,cateto2,hipotenusa;
 		cout << "Ingrese la medida del primer cateto: ";
 		cin >> cateto1;
 		cout << "Ingrese la medida del segundo cateto: ";
 		cin >> cateto2;
 		hipotenusa = pow(cateto1, 2) + pow(cateto2, 2);
 		cout << "La hipotenusa del triangulo es " << sqrt(hipotenusa) << endl;
 		return 0;
 }