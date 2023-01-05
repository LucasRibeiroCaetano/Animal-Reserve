#ifndef META_2_TP_COMANDO_H
#define META_2_TP_COMANDO_H

#include "../Utils/utils.h"

using namespace std;

//Classe Base
class Comando {

    public:

    //Recebe o comando completo juntamente com os parâmetros
    //Esta função irá validar se o comando foi válido ou não
    virtual void execute(const string &comando) = 0;

};


#endif //META_2_TP_COMANDO_H
