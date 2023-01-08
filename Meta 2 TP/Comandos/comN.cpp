#include "comN.h"

void comN::execute(const string &comando) {

    int n = contaPalavras(comando);
    int instantes, p;

    string com, inst, segundos;
    stringstream ss(comando);
    if(n == 1){
        //nada para verificar

    }else if(n == 2){
        ss >> com >> inst;
        if(!isNumber(inst)){
            cout << "\nInstantes invalidos...";
            return;
        }
    }else if(n == 3){
        ss >> com >> inst >> segundos;
        if(!isNumber(inst)){
            cout << "\nInstantes invalidos...";
            return;
        }
        if(!isNumber(segundos)){
            cout << "\nSegundos invalidos...";
            return;
        }
    }else{
        cout << "\nNumero de argumentos incorreto...";
    }
}

comN::comN() = default;
