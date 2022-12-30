#include "alimento.h"
#include "../Utils/utils.h"

Alimento::Alimento(int id, int linha, int coluna)
: id(id), linha(linha), coluna(coluna){}

Alimento :: Alimento(int id, int linha, int coluna, int valorNutritivo, int toxicidade)
: id(id), linha(linha), coluna(coluna), valorNutritivo(valorNutritivo), toxicidade(toxicidade){}
