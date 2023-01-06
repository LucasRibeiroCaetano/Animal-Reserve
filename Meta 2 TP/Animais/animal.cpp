#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

Animal::Animal(int id, string nome, int linha, int coluna) : id(id), nome(nome), linha(linha), coluna(coluna), vivo(true){};
