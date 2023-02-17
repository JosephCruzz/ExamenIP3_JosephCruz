//
// Created by josep on 2/17/2023.
//

#ifndef EXAMENIP3_JOSEPHCRUZ_ARMADURA_H
#define EXAMENIP3_JOSEPHCRUZ_ARMADURA_H


#include <string>

using namespace std;

class armadura {

    //la clase armadura debe tener un material del cual esta hecho (String), puntos de armadura (int min=1, max =20) y pieza de armadura (casco,pechera,grebas,hombreras)

    string material;
    int puntosDeArmadura{};
    string piezaDeArmadura;
    //puntos de armadura de cada pieza se obtienen mediante un medoto random dentro de la clase



    //metodo random

    int randomPuntosDeArmadura();



public:
    armadura(string material, int puntosDeArmadura, string piezaDeArmadura);

    const string &getMaterial() const;

    void setMaterial(const string &material);

    int getPuntosDeArmadura() const;

    void setPuntosDeArmadura(int puntosDeArmadura);

    const string &getPiezaDeArmadura() const;

    void setPiezaDeArmadura(const string &piezaDeArmadura);




};


#endif //EXAMENIP3_JOSEPHCRUZ_ARMADURA_H
