#include "cenoura.h"

Cenoura::Cenoura(int id, Reserva &reserva, int linha, int coluna) : Alimento(id, reserva, linha , coluna){
    tipo = 't';
    valorNutritivo = 4;
    toxicidade = 0;
    cheiros[0] = "verdura";


}

Cenoura::~Cenoura() {

}
