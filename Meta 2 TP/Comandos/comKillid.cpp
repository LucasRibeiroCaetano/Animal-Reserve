#include "comKillid.h"

void comKillid::execute(const string &comando, Reserva &reserva) {

    int n = contaPalavras(comando);
    int id;

    string com, idDado;
    stringstream ss(comando);
    if(n == 2){
        ss >> com >> idDado;
        //Verifica se o id dado e inteiro
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

    id = stoi(idDado);
}

comKillid::comKillid() = default;
