#include "segmento.h"

Segmento::Segmento() : animais(nullptr), alimento(nullptr){}

Segmento::~Segmento() {

    delete[] animais;
    delete alimento;

}
