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

bool isNumber(const string s){
    for (char i: s)
        if (isdigit(i) == 0)
            return false;

    return true;
}


