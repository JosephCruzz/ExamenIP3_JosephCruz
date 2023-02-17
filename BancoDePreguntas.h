
#ifndef EXAMENIP3_JOSEPHCRUZ_BANCODEPREGUNTAS_H
#define EXAMENIP3_JOSEPHCRUZ_BANCODEPREGUNTAS_H


#include <utility>
#include <vector>

#include <vector>
#include "pregunta.h"

class BancoDePreguntas {
private:
    std::vector<Pregunta> preguntas;
    int cantidad_preguntas;
public:
    BancoDePreguntas(std::vector<Pregunta> preg, int cant);

    std::vector<Pregunta> obtener_preguntas();
    int obtener_cantidad_preguntas();
};

#endif //EXAMENIP3_JOSEPHCRUZ_BANCODEPREGUNTAS_H
