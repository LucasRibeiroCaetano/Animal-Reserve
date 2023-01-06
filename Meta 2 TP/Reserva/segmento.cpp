#include "segmento.h"

Segmento::Segmento() : animais(nullptr), alimento(nullptr){}

Segmento::~Segmento() {

    delete[] animais;
    delete alimento;

}

char Segmento::getDisplay() const{
    return display;
}

Alimento * Segmento::getListaAlimento() const {
    return alimento;
}

Animal ** Segmento::getListaAnimais() const {
    return animais;
}

void Segmento::setDisplay(char c) {

    display = c;

}
