//
// Created by josep on 2/17/2023.
//

#ifndef EXAMENIP3_JOSEPHCRUZ_PREGUNTA_H
#define EXAMENIP3_JOSEPHCRUZ_PREGUNTA_H

#include <string>

class Pregunta {
private:
    std::string especificacion;
public:
    explicit Pregunta(std::string espec);

    std::string obtener_especificacion();

    Pregunta();

    int porcentaje;

};



#endif //EXAMENIP3_JOSEPHCRUZ_PREGUNTA_H
