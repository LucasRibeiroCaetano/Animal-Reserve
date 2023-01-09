#ifndef META_2_TP_COMANDHANDLER_H
#define META_2_TP_COMANDHANDLER_H

#include "../Utils/utils.h"
#include "comando.h"
#include "comAnim.h"
#include "comAnimal.h"
#include "comEmpty.h"
#include "comExit.h"
#include "comFeed.h"
#include "comFeedid.h"
#include "comFood.h"
#include "comInfo.h"
#include "comKill.h"
#include "comKillid.h"
#include "comLoad.h"
#include "comN.h"
#include "comNofood.h"
#include "comRestore.h"
#include "comSee.h"
#include "comSlide.h"
#include "comStore.h"
#include "comVisanim.h"


using namespace std;

class ComandHandler {
private:
    bool done;

public:

    ComandHandler();

    string pedeComando();
    int procuraComando(const string& comando, Reserva &reserva);
};

#endif //META_2_TP_COMANDHANDLER_H
