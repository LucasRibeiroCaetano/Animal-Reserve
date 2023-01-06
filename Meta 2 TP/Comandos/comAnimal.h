#ifndef META_2_TP_COMANIMAL_H
#define META_2_TP_COMANIMAL_H

#include "../Utils/utils.h"
#include "../Alimentos/alimento.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

//Alimentar Diretamente Animais:
/*

        No histórico de alimentação o nome do alimento é “user”

        Alimenta os animais que estiverem nessa posição
        feed <linha><coluna><pontos nutritivos><pontos de toxicidade>

        Alimenta o animal com esse ID
        feedid <ID> <pontos nutritivos> <pontos de toxicidade>

 */

class comAnimal : public Comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANIMAL_H
