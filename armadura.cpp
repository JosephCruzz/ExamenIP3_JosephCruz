//
// Created by josep on 2/17/2023.
//

#include "armadura.h"
#include <stdlib.h>
int armadura::randomPuntosDeArmadura() {
    int random = rand() % (21-1);
    return random;
}

armadura::armadura(string material, int puntosDeArmadura, string piezaDeArmadura) {

}
