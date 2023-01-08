#include "comLoad.h"

void comLoad::execute(const string &comando) {
    int n = contaPalavras(comando);

    string com, nome;
    stringstream ss(comando);
    if(n == 2){
        ss >> com >> nome;
        if(isNumber(nome)) {
            cout << "\nNome invalido";
            return;
        }
    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    //Execucao do comando
    string coma, lido;
    ifstream file(nome);
    if(!file){
        cout << "\nErro ao abrir ficheiro...";
        return;
    }


    while(getline(file, lido)){
        cout << "\nComando:";

        cout << lido;
        stringstream aa(lido);
        aa >> coma;

        if(coma == "animal"){

        }
        else if(coma == "kill"){

        }
        else if(coma == "killid"){

        }
        else if(coma == "food"){

        }
        else if(coma == "feed"){

        }
        else if(coma == "feedid"){

        }
        else if(coma == "nofood"){

        }
        else if(coma == "empty"){

        }
        else if(coma == "see"){

        }
        else if(coma == "info"){

        }
        else if(coma == "n"){

        }
        else if(coma == "anim"){

        }
        else if(coma == "visanim"){

        }
        else if(coma == "store"){

        }
        else if(coma == "restore"){

        }
        else if(coma == "load"){

        }
        else if(coma == "slide"){

        }
    }



}
