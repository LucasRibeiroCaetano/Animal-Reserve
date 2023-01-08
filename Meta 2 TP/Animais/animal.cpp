#include "animal.h"

using namespace std;

Animal::Animal(int id, string nome, int linha, int coluna) : id(id), nome(nome), linha(linha), coluna(coluna), vivo(true){}

Animal::~Animal() = default;
