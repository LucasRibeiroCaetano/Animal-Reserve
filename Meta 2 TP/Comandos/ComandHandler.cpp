#include "ComandHandler.h"


ComandHandler :: ComandHandler() {
    done = false;
}

string ComandHandler::pedeComando(){
    string comando;

    cout << "\nComando:\n>";

    cin.clear();

    //Flag para não repetir o cin.ignore
    if (!done) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        done = true;
    }

    getline(cin, comando);

    return comando;
}

int ComandHandler::procuraComando(const string& comando, Reserva &reserva){
    string com;
    stringstream ss(comando);
    ss >> com;

    if(com == "animal"){

        comAnimal animal;
        animal.execute(comando, reserva);
        return 0;

    }
    else if(com == "kill"){
        comKill kill;
        kill.execute(comando, reserva);
        return 0;
    }
    else if(com == "killid"){
        comKillid killid;
        killid.execute(comando, reserva);
        return 0;
    }
    else if(com == "food"){
        comFood food;
        food.execute(comando, reserva);
        return 0;
    }
    else if(com == "feed"){
        comFeed feed;
        feed.execute(comando, reserva);
        return 0;
    }
    else if(com == "feedid"){
        comFeedid feedid;
        feedid.execute(comando, reserva);
        return 0;
    }
    else if(com == "nofood"){
        comNofood nofood;
        nofood.execute(comando, reserva);
        return 0;
    }
    else if(com == "empty"){
        comEmpty empty;
        empty.execute(comando, reserva);
        return 0;
    }
    else if(com == "see"){
        comSee see;
        see.execute(comando, reserva);
        return 0;
    }
    else if(com == "info"){
        comInfo info;
        info.execute(comando, reserva);
        return 0;
    }
    else if(com == "n"){
        comN n;
        n.execute(comando, reserva);
        return 0;
    }
    else if(com == "anim"){
        comAnim anim;
        anim.execute(comando, reserva);
        return 0;
    }
    else if(com == "visanim"){
        comVisanim visanim;
        visanim.execute(comando, reserva);
        return 0;
    }
    else if(com == "store"){
        comStore store;
        store.execute(comando, reserva);
        return 0;
    }
    else if(com == "restore"){
        comRestore restore;
        restore.execute(comando, reserva);
        return 0;
    }
    else if(com == "load"){
        comLoad load;
        load.execute(comando, reserva);
        return 0;
    }
    else if(com == "slide"){
        comSlide slide;
        slide.execute(comando, reserva);
        return 0;
    }
    else if(com == "exit"){
        comExit exit;
        //exit.execute(comando, reserva);
        return 1;
    }
    else{
        cout << "Comando Invalido...";
        return 2;
    }

}

