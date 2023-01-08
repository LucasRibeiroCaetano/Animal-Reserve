#include "comSlide.h"

void comSlide::execute(const string &comando) {

    int n = contaPalavras(comando);
    int num;

    string com, direcao, numero;
    stringstream ss(comando);
    if(n == 3){
        ss >> com >> direcao >> numero;
        if(!isNumber(numero)) {
            cout << "\nLinhas/Colunas invalidas";
            return;
        }
    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    if(direcao == "up"){

    }else if(direcao == "down"){

    }else if(direcao == "right"){

    }else if(direcao == "left"){

    }else{
        cout << "\nDirecao invalida...";
        return;
    }
}
