#include "comKill.h"

void comKill::execute(const string &comando) {

    int n = contaPalavras(comando);
    int nLinha, nColuna;

    string com, linha, coluna;
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
    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    nLinha = stoi(linha);
    nColuna = stoi(coluna);
}
