//
// Created by josep on 2/17/2023.
//

#ifndef EXAMEN_H
#define EXAMEN_H

#include <vector>
#include "pregunta.h"
#include "BancoDePreguntas.h"

class Examen {
private:
    std::string asignatura;
    std::vector<Pregunta> preguntas;
    int puntaje;
    int cantidad_preguntas;
public:
    Examen(std::string asig, int ptje, int cant_preg);

    void crear_examen(BancoDePreguntas banco, int cant_preguntas);
    std::string obtener_asignatura();
    std::vector<Pregunta> obtener_preguntas();
    int obtener_puntaje();
    int obtener_cantidad_preguntas();
    void imprimir_examen();

    void crear_examen(BancoDePreguntas banco);

    std::string obtener_asignatura() const;

    const std::vector<Pregunta> obtener_preguntas() const;

    int obtener_puntaje() const;

    int obtener_cantidad_preguntas() const;
};


#endif //EXAMEN_H