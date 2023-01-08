#ifndef META_2_TP_COMANDHANDLER_H
#define META_2_TP_COMANDHANDLER_H

#include "../Utils/utils.h"

using namespace std;

class ComandHandler {

public:
    ComandHandler();
    string pedeComando();
    void procuraComando(const string& comando);

};

#endif //META_2_TP_COMANDHANDLER_H
