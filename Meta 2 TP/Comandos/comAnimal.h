#ifndef META_2_TP_COMANIMAL_H
#define META_2_TP_COMANIMAL_H

#include "../Utils/utils.h"
#include "../Alimentos/alimento.h"
#include "../Animais/animal.h"
#include "comando.h"
#include "../Reserva/reserva.h"

#include "../Animais/coelho.h"
#include "../Animais/ovelha.h"
#include "../Animais/canguru.h"
#include "../Animais/lobo.h"
#include "../Animais/animalMisterio.h"

using namespace std;

/*
      Cria um animal a escolha

      Syntax: animal<especie: c / o / l / g / m> <linha> <coluna>
                or
              animal <especie: c / o / l / g / m> (posicao aleatoria)
 */

class comAnimal : public Comando{

public:

    comAnimal();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMANIMAL_H
