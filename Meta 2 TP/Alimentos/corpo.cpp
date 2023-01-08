#include "corpo.h"

Corpo::Corpo(int id, Reserva &reserva, int x, int y, int valorNutritivo, int toxicidade) : Alimento(id, reserva, x , y, valorNutritivo, toxicidade) {
    tipo = 'p';
    cheiros[0] = "carne";
}

Corpo::~Corpo() {

}
