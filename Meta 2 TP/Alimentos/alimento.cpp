#include "comida.h"

#include "../Utils/utils.h"

Alimento::Alimento(char nome, int vNutritivo, int toxicidade, int duracao, vector<string> cheiros) : nome(nome), valorNutritivo(vNutritivo), toxicidade(toxicidade), duracao(duracao), cheiros(cheiros){}
