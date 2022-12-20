#ifndef META_2_TP_COMANDO_VEROBJETO_H
#define META_2_TP_COMANDO_VEROBJETO_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "../Alimentos/comida.h"
#include "comando.h"

using namespace std;

//Ver informação acerca de uma elemento do simulador (animal ou alimento)

/*

    Syntax: info <ID>

 */

class comando_verObjeto : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_VEROBJETO_H
