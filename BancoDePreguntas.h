#ifndef BANCO_PREGUNTAS_H
#define BANCO_PREGUNTAS_H

#include <vector>
#include <random>
#include <algorithm>
#include "pregunta.h"

class BancoPreguntas {
public:
    BancoPreguntas(std::vector<Pregunta> preguntas, int cantidad);
    int cantidad() const;
    std::vector<Pregunta> seleccionarPreguntas(int cantidad) const;
private:
    std::vector<Pregunta> preguntas_;
    int cantidad_;
};
BancoPreguntas::BancoPreguntas(std::vector<Pregunta> preguntas, int cantidad) : preguntas_(preguntas), cantidad_(cantidad) {}

int BancoPreguntas::cantidad() const {
    return cantidad_;
}

std::vector<Pregunta> BancoPreguntas::seleccionarPreguntas(int cantidad) const {
    std::vector<Pregunta> seleccionadas;
    if (cantidad >= 3 && cantidad < preguntas_.size()) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, preguntas_.size() - 1);
        while (seleccionadas.size() < cantidad) {
            int index = dis(gen);
            if (std::find(seleccionadas.begin(), seleccionadas.end(), preguntas_[index]) == seleccionadas.end()) {
                seleccionadas.push_back(preguntas_[index]);
            }
        }
    }
    return seleccionadas;
}
#endif // BANCO_PREGUNTAS_H