#include "bife.h"

Bife:: Bife(int id, int linha, int coluna): Alimento(id, linha, coluna){
    tipo = 'b';
    valorNutritivo = 10;
    toxicidade = 2; //constante
    duracao = 30;
    cheiros[0] = "carne";
    cheiros[1] = "ketchup";
}

Bife::~Bife() {

}
