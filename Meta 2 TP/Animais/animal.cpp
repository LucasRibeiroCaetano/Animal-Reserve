#include "animal.h"

#include <utility>

using namespace std;

Animal::Animal(int id, int x, int y,string nome) : id(id), vivo(true), x(x), y(y),nome(nome){}

Animal::~Animal() = default;


char Animal:: getChar() const{
    return representacao;
}

int Animal::getX() const {
    return x;
}

int Animal::getY() const {
    return y;
}
