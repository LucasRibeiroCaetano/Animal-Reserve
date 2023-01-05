//
// Created by Salomé R. Caetano on 05/01/2023.
//

#include "ComandHandler.h"

ComandHandler :: ComandHandler(){}

string ComandHandler :: pedeComando(){
    string comando;

    cout << "\nComando:";
    getline(cin, comando);
    return comando;
}

void ComandHandler::procuraComando( string comando ){
    string com;

    stringstream ss(comando);
    ss >> com;

    switch (com) {
        case "start":
            // code to start something
            break;
        case "stop":
            // code to stop something
            break;
        case "reset":
            // code to reset something
            break;
        default:
            // code to handle other values
            break;
    }


}

