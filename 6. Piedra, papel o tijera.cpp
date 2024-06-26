#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string obtenerJugadaComputadora() {
    int num = rand() % 3;

    switch(num) {
        case 0: return "piedra";
        case 1: return "papel";
        case 2: return "tijera";
    }

    return "";
}
int determinarResultado(string jugadaUsuario, string jugadaComputadora) {
    if (jugadaUsuario == jugadaComputadora) {
        return 0; // Empate
    } else if ((jugadaUsuario == "piedra" && jugadaComputadora == "tijera") ||
               (jugadaUsuario == "papel" && jugadaComputadora == "piedra") ||
               (jugadaUsuario == "tijera" && jugadaComputadora == "papel")) {
        return 1; // Usuario gana
    } else {
        return 2; // Computadora gana
    }
}

int main() {
    srand(time(0));

    int victoriasUsuario = 0;
    int victoriasComputadora = 0;
    string jugadaUsuario;
    string jugadaComputadora;

    while (victoriasUsuario < 3 && victoriasComputadora < 3) {
        cout << "Ingresa tu jugada (piedra, papel o tijera): ";
        cin >> jugadaUsuario;

        // Validar la entrada del usuario
        while (jugadaUsuario != "piedra" && jugadaUsuario != "papel" && jugadaUsuario != "tijera") {
            cout << "JUGADA INVALIDA: Ingresa piedra, papel o tijera: ";
            cin >> jugadaUsuario;
        }
        
        jugadaComputadora = obtenerJugadaComputadora();

        cout << "La computadora eligio: " << jugadaComputadora << endl;

        int resultado = determinarResultado(jugadaUsuario, jugadaComputadora);

        if (resultado == 0) {
            cout << "EMPATE EN ESTA RONDA." << endl;
        } else if (resultado == 1) {
            cout << "GANASTE ESTA RONDA." << endl;
            victoriasUsuario++;
        } else {
            cout << "LA COMPUTADORA GANO ESTA RONDA." << endl;
            victoriasComputadora++;
        }

        // Mostrar el marcador actual
        cout << "Marcador: Usuario " << victoriasUsuario << " - Computadora " << victoriasComputadora << endl;
        cout << endl;
    }

    // Determinar el ganador del juego
    if (victoriasUsuario == 3) {
        cout << "GANASTE EL JUEGO." << endl;
    } else {
        cout << "PERDISTE: La computadora gano el juego" << endl;
    }

    return 0;
}