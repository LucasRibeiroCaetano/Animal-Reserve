//
// Created by Salomé R. Caetano on 05/01/2023.
//
#include <string>
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
    int n;

    stringstream ss(comando);
    ss >> com;

    n = contaPalavras(comando);

    do{
        if(com == "animal"){

        }else if(com == "kill"){

        }else if(com == "killid"){

        }else if(com == "food"){

        }else if(com == "feed"){

        }else if(com == "feedid"){

        }else if(com == "nofood"){

        }else if(com == "empty"){

        }else if(com == "see"){

        }else if(com == "info"){

        }else if(com == "n"){

        }else if(com == "anim"){

        }else if(com == "visanim"){

        }else if(com == "store"){

        }else if(com == "restore"){

        }else if(com == "load"){

        }else if(com == "slide"){

        }
    }while(com != "exit");

    cout << "\nA terminar programa -- Ate a proxima"<< endl;
}

