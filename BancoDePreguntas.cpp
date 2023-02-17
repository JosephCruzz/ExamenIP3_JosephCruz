#include "BancoDePreguntas.h"

BancoDePreguntas::BancoDePreguntas(std::vector<Pregunta> preg, int cant) {
    preguntas = preg;
    cantidad_preguntas = cant;
}

std::vector<Pregunta> BancoDePreguntas::obtener_preguntas() {
    return preguntas;
}

int BancoDePreguntas::obtener_cantidad_preguntas() {
    return cantidad_preguntas;
}