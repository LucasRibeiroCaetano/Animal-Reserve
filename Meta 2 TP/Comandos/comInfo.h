#ifndef META_2_TP_COMINFO_H
#define META_2_TP_COMINFO_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "../Alimentos/comida.h"
#include "comando.h"

using namespace std;

//Ver informação acerca de uma elemento do simulador (animal ou alimento)

/*

    Syntax: info <ID>

 */

class comInfo : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMINFO_H
