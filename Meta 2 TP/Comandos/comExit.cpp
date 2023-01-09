#include "comExit.h"

void comExit::execute(const string &comando, Reserva &reserva) {
    int n = contaPalavras(comando);
    if(n != 1){
        cout << "\nNumero de argumentos incorreto...";
        return;
    }
    else{

    }
}

comExit::comExit() = default;
