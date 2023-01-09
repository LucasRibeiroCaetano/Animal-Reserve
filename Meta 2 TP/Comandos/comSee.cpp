#include "comSee.h"

void comSee::execute(const string &comando, Reserva &reserva) {

    int n = contaPalavras(comando);
    int nLinha, nColuna;

    string com, linha, coluna;
    stringstream ss(comando);
    if(n == 3){
        ss >> com >> linha >> coluna;
        if(isNumber(linha)|| isNumber(coluna)) { //Verifica se a linha e a coluna sao inteiros
            // if(stoi(linha) > NL || stoi(coluna) > NC|| ){ //Verifica se a linha e coluna estao dentro da reserva
            cout << "\nCoordenadas fora da reserva";
            return;
            //}
        }else{
            cout << "\nCoordenadas invalidas...";
            return;
        }
    }else{
        cout << "\nDemasiados argumentos...";
        return;
    }

    nLinha = stoi(linha);
    nColuna = stoi(coluna);
}

comSee::comSee() = default;
