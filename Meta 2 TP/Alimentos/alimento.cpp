#include "alimento.h"

Alimento::Alimento(int id, int x, int y)
: id(id), x(x), y(y){}

Alimento :: Alimento(int id, int x, int y, int valorNutritivo, int toxicidade)
: id(id), x(x), y(y), valorNutritivo(valorNutritivo), toxicidade(toxicidade){}


char Alimento:: getChar() const{
    return tipo;
}

int Alimento :: getX() const{
    return x;
}

int Alimento::getY() const {
    return y;
}




