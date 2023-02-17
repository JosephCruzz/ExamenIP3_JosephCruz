#include <iostream>
using namespace std;
using namespace std;
int main() {
    int menu = 0;
    do {
        cout << "1. Ejercicio practico 1 - Leyend of Selma" << endl;
        cout << "2. Ejercicio practico 2 - Generador de Examen" << endl;
        cout << "3. Salir." << endl;
        cout << "Ingrese la opcion que desea: ";
        cin >> menu;
        switch (menu) {
            case 1: {
                cout << "Ejercicio practico 1 - Leyend of Selma" << endl;
                cout << "Ingrese el nombre del personaje: ";
                string nombre;
                cin >> nombre;
                cout << "Ingrese el tipo de arma: ";
                string tipoDeArma;
                cin >> tipoDeArma;
                cout << "Ingrese el nombre de la arma: ";
                string nombreDeArma;
                cin >> nombreDeArma;
                cout << "Ingrese el daño de la arma: ";
                int danio;
                cin >> danio;
                cout << "Ingrese el material de la armadura: ";
                string material;
                cin >> material;
                cout << "Ingrese la pieza de la armadura: ";
                string piezaDeArmadura;
                cin >> piezaDeArmadura;
                cout << "Ingrese los puntos de armadura: ";
                int puntosDeArmadura;
                cin >> puntosDeArmadura;
                cout << "Ingrese los puntos de vida: ";
                int puntosDeVida;
                cin >> puntosDeVida;

                return 0;
                break;
            }
            case 2: {

                break;
            }

        }
    } while (menu != 3);
}