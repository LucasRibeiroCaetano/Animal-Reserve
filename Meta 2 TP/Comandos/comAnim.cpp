#include "comAnim.h"

void comAnim::execute(const string &comando) {
    int n = contaPalavras(comando);
    if(n != 1){
        cout << "\nNumero de argumentos incorreto...";
        return;
    }
    else{

    }
}

comAnim::comAnim() = default;
