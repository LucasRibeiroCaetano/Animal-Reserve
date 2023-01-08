#include "comStore.h"

void comStore::execute(const string &comando) {
    int n = contaPalavras(comando);

    string com, nome;
    stringstream ss(comando);
    if(n == 2){
        ss >> com >> nome;
        //nada para verificar
    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

}
