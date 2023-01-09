#include "comRestore.h"

void comRestore::execute(const string &comando, Reserva &reserva) {

    int n = contaPalavras(comando);

    string com, nome;
    stringstream ss(comando);
    if(n == 2){
        ss >> com >> nome;
        //Verifica se o id dado e inteiro
        if(!isNumber(nome)) {
            //if( idk how :) ){ //Verifica se o nome existe
            cout << "\nNome nao encontrado...";
            return;
            //}
        }else{
            cout << "\nNome invalido...";
            return;
        }
    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }
}

comRestore::comRestore() = default;
