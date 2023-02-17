//
// Created by josep on 2/17/2023.
//

#ifndef EXAMENIP3_JOSEPHCRUZ_PERSONAJE_H
#define EXAMENIP3_JOSEPHCRUZ_PERSONAJE_H

#include <string>
#include <vector>
#include "armadura.h"
#include "arma.h"

using namespace std ;

class personaje {
public:
    explicit personaje(const vector <armadura> &armaduras);

private:

    // personaje debe tener un nombre, una vector de amraduras, un objeto de tipo arma y puntos de vida (int min =3, max -15)

    string nombre;
    vector <armadura> armaduras;
    arma arma;
    int puntosDeVida;











};

#endif //EXAMENIP3_JOSEPHCRUZ_PERSONAJE_H
