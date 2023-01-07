#include "comAnimal.h"

void comAnimal::execute(const string &comando) {
    int n = contaPalavras(comando);
    int nLinha, nColuna;

    string com, especie, linha, coluna;
    stringstream ss(comando);
    if(n == 2){
        ss >> com >> especie >> linha >> coluna;
        if(isNumber(linha)|| isNumber(coluna)) { //Verifica se a linha e a coluna sao inteiros
            // if(stoi(linha) > NL || stoi(coluna) > NC|| ){ //Verifica se a linha e coluna estao dentro da reserva
                cout << "\nCoordenadas fora da reserva";
                return;
           //}
        }else{
            cout << "\nCoordenadas invalidas";
            return;
        }
    }else if(n == 4){
        ss >> com >> especie;
        nLinha = rand();
        nColuna = rand();

    }else{
        cout << "\nDemasiados argumentos...";
        return;
    }

    if(especie == "c"){

    }else if(especie == "o"){

    }else if(especie == "l"){

    }else if(especie == "g"){

    }else if(especie == "m"){

    }else{
        cout << "\nEspecie invalida";
        return;
    }

}
