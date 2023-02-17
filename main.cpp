#include <iostream>
#include "personaje.h"
#include "arma.h"
#include "armadura.h"
#include "BancoDePreguntas.h"
#include "Examen.h"
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
                int cascos = 0, pecheras = 0, grebas = 0, hombreras = 0;
                system("cls");
                cout << "Ejercicio 1" << endl;
                cout << "Ingrese el nombre del personaje: ";
                string nombre;
                cin.ignore();
                getline(cin, nombre);
                cout << "Ingrese el nombre del arma: ";
                string nombreArma;
                cin.ignore();
                getline(cin, nombreArma);
                cout << "Ingrese el tipo de arma: ";
                string tipoArma;
                cin >> tipoArma;
                cout << "Ingrese la vida del personaje: ";
                int vida;
                cin >> vida;
                while (vida < 3 || vida > 15) {
                    cout << "La vida debe estar entre 3 y 15, ingrese nuevamente: ";
                    cin >> vida;
                }
                string material;
                string respuesta = "";
                while (respuesta != "n") {
                    cout << "Menu de armaduras: " << endl;
                    cout << "1. Casco" << endl;
                    cout << "2. Pechera" << endl;
                    cout << "3. Grebas" << endl;
                    cout << "4. Hombreras" << endl;
                    cout << "Ingrese el numero de la armadura que desea: ";
                    int armadura;
                    cin >> armadura;
                    cout << "Ingrese el material de la armadura: ";
                    cin >> material;
                    switch (armadura) {
                        case 1:
                            if (cascos == 1)
                                cout << "Ya se ha agregado un casco" << endl;
                            else
                                cout << "Se ha agregado un casco de " + material + " al personaje" << endl;
                            cascos++;
                            break;
                        case 2:
                            if (pecheras == 1)
                                cout << "Ya se ha agregado una pechera" << endl;
                            else
                                cout << "Se ha agregado una pechera de " + material + " al personaje" << endl;
                            pecheras++;
                            break;
                        case 3:
                            if (grebas == 1)
                                cout << "Ya se ha agregado una grebas" << endl;
                            else
                                cout << "Se ha agregado una grebas de " + material + " al personaje" << endl;
                            grebas++;
                            break;
                        case 4:
                            if (hombreras == 1)
                                cout << "Ya se ha agregado una hombreras" << endl;
                            else
                                cout << "Se ha agregado una hombreras de " + material + " al personaje" << endl;
                            hombreras++;
                            break;
                        default:
                            cout << "Opcion invalida" << endl;
                            break;
                    }
                    cout << "Desea agregar otra pieza de armadura? s/n" << endl;
                    cin >> respuesta;
                }
                arma* arma = new class arma();
                arma->nombre = nombreArma;
                arma->tipoDeArma = tipoArma;
                Armadura* armadura1 = new class Armadura();
                armadura1->material = material;
                Personaje* personaje = new class Personaje();
                personaje->nombre = nombre;
                personaje->vida = vida;
                personaje->arma = arma;
                personaje->armaduras.push_back(armadura1);
                system("cls");
                personaje->ImprimirPersonaje();
                system("pause");


                return 0;
                break;
            }
            case 2: {
                // Se crean algunas preguntas
                vector<Pregunta> Preguntas;
                Preguntas.push_back(Pregunta("¿Cuál es la capital de Francia?"));
                Preguntas.push_back(Pregunta("¿En qué año fue la Independencia de México?"));
                Preguntas.push_back(Pregunta("¿Quién escribió el Quijote?"));
                Preguntas.push_back(Pregunta("¿Cuántas patas tiene una araña?"));
                Preguntas.push_back(Pregunta("¿Cuál es la fórmula química del agua?"));
                BancoPreguntas banco(Preguntas,2);
                std::string asignatura = "Geografía e Historia";
                int puntaje = 20;
                int cantidad_preguntas = 4;
                Examen examen(asignatura, puntaje, cantidad_preguntas, reinterpret_cast<BancoPreguntas &>(banco));
                examen.crearExamen();
                examen.imprimirExamen();
                break;
                return 0;
                break;
            }

        }
    } while (menu != 3);
}