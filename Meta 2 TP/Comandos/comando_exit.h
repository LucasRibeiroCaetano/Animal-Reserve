#ifndef META_2_TP_COMANDO_EXIT_H
#define META_2_TP_COMANDO_EXIT_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Exit: Encerrar o simulador

class comando_exit : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_EXIT_H
