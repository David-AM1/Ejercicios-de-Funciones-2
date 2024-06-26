#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string obtenerJugadaDeComputadora() {
    int n = rand() % 3;

    switch(n) {
        case 0: return "piedra";
        case 1: return "papel";
        case 2: return "tijera";
    }

    return "";
}
int determinarResultado(string turnoUsuario, string turnoComputadora) {
    if (turnoUsuario == turnoComputadora) {
        return 0; // Empate de ronda
    } else if ((turnoUsuario == "piedra" && turnoComputadora == "tijera") ||
               (turnoUsuario == "papel" && turnoComputadora == "piedra") ||
               (turnoUsuario == "tijera" && turnoComputadora == "papel")) {
        return 1; // Usuario gana ronda
    } else {
        return 2; // Computadora gana ronda
    }
}

int main() {
    srand(time(0));

    int victoriasUsuario = 0;
    int victoriasComputadora = 0;
    string turnoUsuario;
    string turnoComputadora;

    while (victoriasUsuario < 3 && victoriasComputadora < 3) {
        cout << "Ingresa tu jugada (piedra, papel o tijera): ";
        cin >> turnoUsuario;

        while (turnoUsuario != "piedra" && turnoUsuario != "papel" && turnoUsuario != "tijera") {
            cout << "JUGADA INVALIDA: Ingresa piedra, papel o tijera: ";
            cin >> turnoUsuario;
        }
        
        turnoComputadora = obtenerJugadaDeComputadora();

        cout << "La computadora eligio: " << turnoComputadora << endl;

        int resultado = determinarResultado(turnoUsuario, turnoComputadora);

        if (resultado == 0) {
            cout << "EMPATE EN ESTA RONDA." << endl;
        } else if (resultado == 1) {
            cout << "GANASTE ESTA RONDA." << endl;
            victoriasUsuario++;
        } else {
            cout << "LA COMPUTADORA GANO ESTA RONDA." << endl;
            victoriasComputadora++;
        }

        cout << "Marcador: Usuario " << victoriasUsuario << " - Computadora " << victoriasComputadora << endl;
        cout << endl;
    }

    if (victoriasUsuario == 3) {
        cout << "GANASTE EL JUEGO." << endl;
    } else {
        cout << "PERDISTE: La computadora gano el juego." << endl;
    }

    return 0;
}