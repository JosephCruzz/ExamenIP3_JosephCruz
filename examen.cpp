//
// Created by josep on 2/17/2023.
//

#include "examen.h"
#include "BancoDePreguntas.h"
#include "Pregunta.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

Examen::Examen(std::string asignatura, int puntaje, int cantidad_preguntas) {
    this->asignatura = asignatura;
    this->puntaje = puntaje;
    this->cantidad_preguntas = cantidad_preguntas;
}

void Examen::crear_examen(BancoDePreguntas banco) {
    // Verificar que haya suficientes preguntas en el banco
    if (banco.obtener_cantidad_preguntas() < this->cantidad_preguntas) {
        std::cout << "No hay suficientes preguntas en el banco." << std::endl;
        return;
    }

    // Generar índices aleatorios para seleccionar las preguntas
    int* indices = new int[this->cantidad_preguntas];
    bool* preguntas_seleccionadas = new bool[banco.obtener_cantidad_preguntas()];
    for (int i = 0; i < banco.obtener_cantidad_preguntas(); i++) {
        preguntas_seleccionadas[i] = false;
    }
    srand(time(NULL));
    for (int i = 0; i < this->cantidad_preguntas; i++) {
        int indice;
        do {
            indice = rand() % banco.obtener_cantidad_preguntas();
        } while (preguntas_seleccionadas[indice]);
        indices[i] = indice;
        preguntas_seleccionadas[indice] = true;
    }
    delete[] preguntas_seleccionadas;

    // Seleccionar las preguntas y calcular los porcentajes
    //Pregunta* preguntas_y_porcentajes = new Pregunta[this->cantidad_preguntas];
    int porcentaje_total = 0;
    for (int i = 0; i < this->cantidad_preguntas; i++) {
       // preguntas_y_porcentajes[i] = banco.obtener_preguntas()[indices[i]];
        int porcentaje_pregunta = rand() % 51 + 50;
        //preguntas_y_porcentajes[i].porcentaje = porcentaje_pregunta;
        porcentaje_total += porcentaje_pregunta;
    }
    delete[] indices;

    // Normalizar los porcentajes para que sumen 100
    for (int i = 0; i < this->cantidad_preguntas; i++) {
       // preguntas_y_porcentajes[i].porcentaje = preguntas_y_porcentajes[i].porcentaje * 100 / porcentaje_total;
    }

    // Asignar las preguntas al examen
    //this->preguntas == preguntas_y_porcentajes;
    //delete[] preguntas_y_porcentajes;
}

std::string Examen::obtener_asignatura() {
    return this->asignatura;
}

vector<Pregunta> Examen::obtener_preguntas() {
    return this->preguntas;
}

int Examen::obtener_puntaje() {
    return this->puntaje;
}

int Examen::obtener_cantidad_preguntas() {
    return this->cantidad_preguntas;
}

void Examen::imprimir_examen() {
    std::cout << "Examen de " << this->asignatura << std::endl;
    std::cout << "Puntaje total: " << this->puntaje << std::endl;
    std::cout << "Cantidad de preguntas: " << this->cantidad_preguntas << std::endl;
    for (int i = 0; i < cantidad_preguntas; i++) {
        cout << i+1 << ". " << preguntas[i].obtener_especificacion() << " - " << (100/cantidad_preguntas) << "% de la nota" << endl;
    }
    cout << "Puntaje total: " << puntaje << endl;
}


