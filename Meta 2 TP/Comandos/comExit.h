#ifndef META_2_TP_COMEXIT_H
#define META_2_TP_COMEXIT_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Exit: Encerrar o simulador

class comExit : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMEXIT_H
