#ifndef META_2_TP_COMANDO_SKIPSIM_H
#define META_2_TP_COMANDO_SKIPSIM_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Passar para o instante seguinte da simulação

/*

        n (“n” de “next” - mais rápido de escrever) -> Sem parâmetros avança 1 instante

        n <N>
        avança N instantes, mas 1 de cada vez, executando as ações de cada um dos
        instantes. Após cada um é, como habitualmente, apresentada a informação relevante
        (sumário do que se passa no simulador e área visível da reserva).

        n <N><P>
        Mesmo que o anterior mas faz uma pausa de P segundos entre cada instante para dar
        tempo para ver.

 */

class comando_skipSim : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_SKIPSIM_H
