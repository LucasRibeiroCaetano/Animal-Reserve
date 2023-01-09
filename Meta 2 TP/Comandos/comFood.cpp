#include "comFood.h"

using namespace std;

void comFood::execute(const string &comando, Reserva &reserva) {

    int n = contaPalavras(comando);
    int nLinha, nColuna;

    string com, tipo, linha, coluna;
    stringstream ss(comando);
    if(n == 4){
        ss >> com >> tipo >> linha >> coluna;
        if(isNumber(linha)|| isNumber(coluna)) { //Verifica se a linha e a coluna sao inteiros
            // if(stoi(linha) > NL || stoi(coluna) > NC|| ){ //Verifica se a linha e coluna estao dentro da reserva
            cout << "\nCoordenadas fora da reserva...";
            return;
            //}
        }else{
            cout << "\nCoordenadas invalidas...";
            return;
        }
    }else if(n == 2){
        ss >> com >> tipo;
        nLinha = rand();
        nColuna = rand();

    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    if(tipo == "r"){

    }else if(tipo == "t"){

    }else if(tipo == "b"){

    }else if(tipo == "a"){

    }else{
        cout << "\nEspecie invalida...";
        return;
    }
}

comFood::comFood() = default;


