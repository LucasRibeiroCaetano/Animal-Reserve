#include "corpo.h"

Corpo::Corpo(int id, int linha, int coluna, int valorNutritivo, int toxicidade) : Alimento(id, linha , coluna, valorNutritivo, toxicidade) {
    tipo = 'p';
    cheiros[0] = "carne";
}

Corpo::~Corpo() {

}
