#include "utils.h"

int contaPalavras(const string& com){
    stringstream s(com);
    string palavra;
    int contador = 0;

    while(s >> palavra){
        contador++;
    }
    return contador;
}
