//
// Created by josep on 2/17/2023.
//

#ifndef EXAMENIP3_JOSEPHCRUZ_ARMADURA_H
#define EXAMENIP3_JOSEPHCRUZ_ARMADURA_H


#include <string>

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

class Armadura{
private:
public:
    string material;
    int puntosdearmadura(){
        int min = 1, max = 20;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(min, max);
        return dis(gen);
    }
    int pieza[4];



    const string &getMaterial() const;

    void setMaterial(const string &material);

    int getPuntosDeArmadura() const;

    void setPuntosDeArmadura(int puntosDeArmadura);

    const string &getPiezaDeArmadura() const;

    void setPiezaDeArmadura(const string &piezaDeArmadura);




};


#endif //EXAMENIP3_JOSEPHCRUZ_ARMADURA_H
