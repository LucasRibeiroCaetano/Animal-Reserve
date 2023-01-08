#include "relva.h"

Relva::Relva(int id, Reserva &reserva,  int x, int y) : Alimento(id, reserva, x, y) {

    tipo =  'r';
    valorNutritivo = 3;
    toxicidade = 0; //constante
    duracao = 20;
    cheiros[0] = "erva";
    cheiros[1] = "verdura";

}

Relva::~Relva() {

}

void Relva::novaRelva() {

}
