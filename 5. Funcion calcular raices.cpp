#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c) {
    double disc = b*b - 4*a*c;
    double pReal, pImaginaria;
    if (disc >= 0) { // RAICES REALES
        double x1 = (-b + sqrt(disc)) / (2*a);
        double x2 = (-b - sqrt(disc)) / (2*a);
        cout << "Las raices son:" << endl;
        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 ;
    } else { // RAICES COMPLEJAS
        pReal = -b / (2*a);
        pImaginaria = sqrt(-disc) / (2*a);
        if (pImaginaria>1) {
        	cout << "Las raices son:" << endl;
        	cout << "X1 = " << pReal << " + " << pImaginaria << "i" << endl;
        	cout << "X2 = " << pReal << " - " << pImaginaria << "i";
		} else {
			    cout << "Las raices son:" << endl;
			    cout << "X1 = " << pReal << " + " << "i" << endl;
			    cout << "X2 = " << pReal << " - " << "i";
		}
    }
}
int main() {
    double a, b, c;
    cout << "Ingrese el termino cuadratico 'a': ";
    cin >> a;
    cout << "Ingrese el termino lineal 'b': ";
    cin >> b;
    cout << "Ingrese el termino independiente 'c': ";
    cin >> c;
    calcularRaices(a, b, c);
    return 0;
}