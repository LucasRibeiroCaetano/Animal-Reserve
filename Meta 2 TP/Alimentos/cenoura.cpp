#include "cenoura.h"

Cenoura::Cenoura(int id, int x, int y) : Alimento(id, x , y){

    tipo = 't';
    valorNutritivo = 4;
    toxicidade = 0;
    cheiros[0] = "verdura";

}

Cenoura::~Cenoura() {

}
