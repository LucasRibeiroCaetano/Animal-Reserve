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

bool isNumber(const string& s){return all_of(s.begin(), s.end(), ::isdigit);}


