//
// Created by josep on 2/17/2023.
//

#ifndef EXAMENIP3_JOSEPHCRUZ_ARMA_H
#define EXAMENIP3_JOSEPHCRUZ_ARMA_H
#include <string>
#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

class arma {

    //La clase arma tendría un nombre(string), tipo de arma (string) y el daño que hace (int, min = 10, max = 60).
public:
    int danio(){
        int min = 10, max = 60;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(min, max);
        return dis(gen);
    }



    string nombre;
    string tipoDeArma;
};


#endif //EXAMENIP3_JOSEPHCRUZ_ARMA_H
