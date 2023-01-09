#ifndef META_2_TP_COMANDO_H
#define META_2_TP_COMANDO_H

#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

//Classe Base
class Comando {

public:

    Comando();

    //Recebe o comando completo juntamente com os parâmetros
    //Esta função irá validar se o comando foi válido ou não
    virtual void execute(const string &comando, Reserva &reserva) = 0;

};


#endif //META_2_TP_COMANDO_H
