#include "comKill.h"

void comKill::execute(const string &comando, Reserva &reserva) {

    int n = contaPalavras(comando);
    int nLinha, nColuna;

    string com;
    stringstream ss(comando);
    if(n == 3){
        ss >> com >> nLinha >> nColuna;

        //Verifica se a linha e coluna estao dentro da reserva
        if (nLinha > reserva.getNC() || nColuna > reserva.getNL()){
            cout << "\nCoordenadas fora da reserva...";
            return;
        }
    }
    else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    for(int i = 0; i < reserva.getNC()*reserva.getNL(); i++){

        //Se existir um animal nessa posição
        if(reserva.getAnimais()[i]->getX() == nLinha && reserva.getAnimais()[i]->getY() == nColuna)
            delete reserva.getAnimais()[i];

    }
}

comKill::comKill() = default;
