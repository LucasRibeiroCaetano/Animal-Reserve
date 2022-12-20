#ifndef META_2_TP_COMANDO_RXCOMANDOSTXT_H
#define META_2_TP_COMANDO_RXCOMANDOSTXT_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Carregar e executar comandos a partir de um ficheiro de texto

/*

        Syntax: load <nome-do-ficheiro>

        Os comandos são lidos, validados e executados da forma habitual,
        mas em vez de virem da stream associada ao teclado, vêm da stream associada ao ficheiro

        Não é admissível assumir um nome fixo para o ficheiro.
        Este comando pode ser executado em qualquer altura.

 */

class comando_RxComandosTXT : public comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_RXCOMANDOSTXT_H
