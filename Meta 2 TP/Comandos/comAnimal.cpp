#include "comAnimal.h"

void comAnimal::execute(const string &comando, Reserva &reserva) {

    int n = contaPalavras(comando);
    int nLinha, nColuna;

    string com, especie, linha, coluna;
    stringstream ss(comando);

    //4 Parâmetros (Com Localização)
    if (n == 4) {

        ss >> com >> especie >> nLinha >> nColuna;

        //Verifica se a linha e coluna estao dentro da reserva
        if (nLinha > reserva.getNC() || nColuna > reserva.getNL()) {
            cout << "\nCoordenadas fora da reserva...";
            return;
        }
    }

    //2 Parâmetros (Sem Localização)
    else if(n == 2){
        ss >> com >> especie;

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> sizeNC(0, reserva.getNC());
        uniform_int_distribution<> sizeNL(0, reserva.getNL());

        nLinha = sizeNC(gen);
        nColuna = sizeNL(gen);

        cout << "\nCriacao de Animal Aleatoria:\nX = " << nLinha << endl;
        cout << "Y = " << nColuna << endl;
        cout << "\n";

        if(nLinha >= reserva.getCseX() && nLinha < reserva.getLimX() && nColuna >= reserva.getCseY() && nColuna < reserva.getLimY()){
            cout << "Pertence: Sim\n" << endl;
        }
        else
            cout << "Pertence: Nao\n" << endl;
    }
    else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    //Cria Coelho
    if(especie == "c"){

        int newID = reserva.getID();

        newID++;

        reserva.addAnimal(new Coelho(newID, nLinha, nColuna));

        reserva.setID(newID);
    }

    //Cria Ovelha
    else if(especie == "o"){

        int newID = reserva.getID();

        newID++;

        reserva.addAnimal(new Ovelha(newID, nLinha, nColuna));
    }

    //Cria Lobo
    else if(especie == "l"){

        int newID = reserva.getID();

        newID++;

        reserva.addAnimal(new Lobo(newID, nLinha, nColuna));
    }

    //Cria Canguru
    else if(especie == "g"){

        int newID = reserva.getID();

        newID++;

        reserva.addAnimal(new Canguru(newID, nLinha, nColuna));
    }

    //Animal Mistério
    else if(especie == "m"){

        int newID = reserva.getID();

        newID++;

        reserva.addAnimal(new animalMisterio(newID, nLinha, nColuna));
    }
    else{
        cout << "\nEspecie invalida...";
        return;
    }
}

comAnimal::comAnimal() = default;
