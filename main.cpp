#include <iostream>
#include "personaje.h"
#include "arma.h"
#include "armadura.h"
#include "BancoDePreguntas.h"
#include "Examen.h"
#include "Pregunta.h"
#include "Examen.h"
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



                return 0;
                break;
            }
            case 2: {
                // Se crean algunas preguntas
                Pregunta p1("¿Cuál es la capital de Francia?");
                Pregunta p2("¿En qué año fue la Independencia de México?");
                Pregunta p3("¿Quién escribió el Quijote?");
                Pregunta p4("¿Cuántas patas tiene una araña?");
                Pregunta p5("¿Cuál es la fórmula química del agua?");

                // Se agregan las preguntas al banco de preguntas
                vector<Pregunta> preguntas = {p1, p2, p3, p4, p5};
                BancoDePreguntas banco(preguntas, preguntas.size());

                // Se crea un examen
                Examen examen("Historia", 100, 3);

                // Se generan preguntas aleatorias para el examen
                examen.crear_examen(banco);

                // Se imprime el examen generado
                examen.imprimir_examen();

                return 0;
                break;
            }

        }
    } while (menu != 3);
}