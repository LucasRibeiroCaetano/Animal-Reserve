#include "corpo.h"

Corpo::Corpo(int id, int x, int y, int valorNutritivo, int toxicidade) : Alimento(id, x , y, valorNutritivo, toxicidade) {
    tipo = 'p';
    cheiros[0] = "carne";
}

Corpo::~Corpo() {

}
