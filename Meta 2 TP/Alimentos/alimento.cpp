#include "alimento.h"

Alimento::Alimento(int id, Reserva &reserva, int linha, int coluna)
: id(id), linha(linha), coluna(coluna){}

Alimento :: Alimento(int id, Reserva &reserva, int linha, int coluna, int valorNutritivo, int toxicidade)
: id(id), linha(linha), coluna(coluna), valorNutritivo(valorNutritivo), toxicidade(toxicidade){}
