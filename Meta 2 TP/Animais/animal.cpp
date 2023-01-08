#include "animal.h"

#include <utility>

using namespace std;

Animal::Animal(int id, string nome, int x, int y) : id(id), nome(nome), vivo(true){}

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
