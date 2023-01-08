#include "cenoura.h"

Cenoura::Cenoura(int id, Reserva &reserva, int x, int y) : Alimento(id, reserva, x , y){
    tipo = 't';
    valorNutritivo = 4;
    toxicidade = 0;
    cheiros[0] = "verdura";


}

Cenoura::~Cenoura() {

}
