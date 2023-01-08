#include "corpo.h"

Corpo::Corpo(int id, Reserva &reserva, int linha, int coluna, int valorNutritivo, int toxicidade) : Alimento(id, reserva, linha , coluna, valorNutritivo, toxicidade) {
    tipo = 'p';
    cheiros[0] = "carne";
}

Corpo::~Corpo() {

}
