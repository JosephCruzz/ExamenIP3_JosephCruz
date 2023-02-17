//
// Created by josep on 2/17/2023.
//

#ifndef EXAMEN_H
#define EXAMEN_H

#include <vector>
#include <string>
#include <iostream>
#include <random>
#include "pregunta.h"
#include "BancoDePreguntas.h"

class Examen {
public:
    Examen(std::string asignatura, int puntaje, int cantidad_preguntas, BancoPreguntas& banco);
    void crearExamen();
    void imprimirExamen() const;
private:
    std::string asignatura_;
    int puntaje_;
    int cantidad_preguntas_;
    BancoPreguntas& banco_;
    std::vector<Pregunta> preguntas_;
    std::vector<int> puntajes_;
};
Examen::Examen(std::string asignatura, int puntaje, int cantidad_preguntas, BancoPreguntas& banco) : asignatura_(asignatura), puntaje_(puntaje), cantidad_preguntas_(cantidad_preguntas), banco_(banco) {}

void Examen::crearExamen() {
    preguntas_ = banco_.seleccionarPreguntas(cantidad_preguntas_);
    int puntaje_total = puntaje_;
    for (int i = 0; i < cantidad_preguntas_; i++) {
        int puntaje_pregunta = puntaje_ / cantidad_preguntas_;
        puntajes_.push_back(puntaje_pregunta);
        puntaje_total -= puntaje_pregunta;
    }
// Distribuir el puntaje sobrante en preguntas aleatorias
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, cantidad_preguntas_ - 1);
    while (puntaje_total > 0) {
        int index = dis(gen);
        puntajes_[index]++;
        puntaje_total--;
    }
}
void Examen::imprimirExamen() const {
    std::cout << "Asignatura: " << asignatura_ << std::endl;
    std::cout << "Puntaje total: " << puntaje_ << std::endl;
    std::cout << "Cantidad de preguntas: " << cantidad_preguntas_ << std::endl;
    std::cout << "Preguntas: " << std::endl;
    for (int i = 0; i < cantidad_preguntas_; i++) {
        std::cout << i+1 << ") " << preguntas_[i].especificacion() << " (" << puntajes_[i] << " pts)" << std::endl;
    }
}
#endif // EXAMEN_H

