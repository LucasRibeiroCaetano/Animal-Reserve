#include "ComandHandler.h"

ComandHandler :: ComandHandler() {
    done = false;
}

string ComandHandler::pedeComando(){
    string comando;

    cout << "\nComando:";
    getline(cin, comando);

    return comando;
}

void ComandHandler::procuraComando(const string& comando ){
    string com;
    stringstream ss(comando);
    ss >> com;

    do{
        if(com == "animal"){

        }
        else if(com == "kill"){

        }
        else if(com == "killid"){

        }
        else if(com == "food"){

        }
        else if(com == "feed"){

        }
        else if(com == "feedid"){

        }
        else if(com == "nofood"){

        }
        else if(com == "empty"){

        }
        else if(com == "see"){

        }
        else if(com == "info"){

        }
        else if(com == "n"){

        }
        else if(com == "anim"){

        }
        else if(com == "visanim"){

        }
        else if(com == "store"){

        }
        else if(com == "restore"){

        }
        else if(com == "load"){

        }
        else if(com == "slide"){

        }
        else{
            cout << "Comando Invalido...";
        }
    }
    while(com != "exit");

    cout << "\nA terminar programa."<< endl;
}

