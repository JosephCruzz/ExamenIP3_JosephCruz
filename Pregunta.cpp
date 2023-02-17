//
// Created by josep on 2/17/2023.
//

#include "Pregunta.h"

Pregunta::Pregunta(std::string espec) {
    especificacion = espec;
}

std::string Pregunta::obtener_especificacion() {
    return especificacion;
}

Pregunta::Pregunta() {

}
