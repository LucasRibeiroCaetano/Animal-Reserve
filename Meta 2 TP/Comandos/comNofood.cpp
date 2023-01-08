#include "comNofood.h"

void comNofood::execute(const string &comando) {
    int n = contaPalavras(comando);
    int nLinha, nColuna, id;

    string com, idDado, linha, coluna;
    stringstream ss(comando);
    if(n == 3){
        ss >> com >> linha >> coluna;
        if(isNumber(linha)|| isNumber(coluna)) { //Verifica se a linha e a coluna sao inteiros
            // if(stoi(linha) > NL || stoi(coluna) > NC|| ){ //Verifica se a linha e coluna estao dentro da reserva
            cout << "\nCoordenadas fora da reserva...";
            return;
            //}
        }else{
            cout << "\nCoordenadas invalidas...";
            return;
        }
    }else if(n == 1){
        ss >> com >> idDado;
        if(isNumber(idDado)) {
            // if( idk how :) ){ //Verifica se o id existe
            cout << "\nId inexistente...";
            return;
            //}
        }else{
            cout << "\nID invalido...";
            return;
        }

    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }
}
