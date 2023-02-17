#ifndef PREGUNTA_H
#define PREGUNTA_H

#include <string>

class Pregunta {
public:
    Pregunta(std::string especificacion);
    std::string especificacion() const;
private:
    std::string especificacion_;
};
Pregunta::Pregunta(std::string especificacion) : especificacion_(especificacion) {}

std::string Pregunta::especificacion() const {
    return especificacion_;
}

bool operator==(const Pregunta& p1, const Pregunta& p2) {
    return p1.especificacion() == p2.especificacion();
}
#endif // PREGUNTA_H