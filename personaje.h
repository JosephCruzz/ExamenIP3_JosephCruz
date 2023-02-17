//
// Created by josep on 2/17/2023.
//

#ifndef EXAMENIP3_JOSEPHCRUZ_PERSONAJE_H
#define EXAMENIP3_JOSEPHCRUZ_PERSONAJE_H

#include <string>
#include <vector>
#include "arma.h"
#include "armadura.h"

using namespace std;
class Personaje{
private:
public:
    string nombre;
    int vida, min  = 3, max = 15;
    vector <Armadura*> armaduras;
    arma* arma;
    void ImprimirPersonaje(){
        cout << "Nombre del personaje: " << nombre << endl;
        cout << "Vida del personaje: " << vida << endl;
        cout << "Arma del personaje: " << arma->nombre << endl;
        cout << "Tipo de arma que usara el personaje: " << arma->tipoDeArma << endl;
        cout << "Daño del personaje: " << arma->danio() << endl;
        cout << "Puntos de armadura del personaje: " << armaduras[0]->puntosdearmadura() << endl;
        cout << "Puntos de vida total del personaje: " << vida + arma->danio() + armaduras[0]->puntosdearmadura() << endl;
    }
};

#endif //EXAMENIP3_JOSEPHCRUZ_PERSONAJE_H
