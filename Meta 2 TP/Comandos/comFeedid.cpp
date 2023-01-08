#include "comFeedid.h"

void comFeedid::execute(const string &comando) {

    int n = contaPalavras(comando);
    int nLinha, nColuna, ptsNutritivos, ptsToxicidade, id;

    string com, idDado, nutritivos, toxicidade;
    stringstream ss(comando);
    if(n == 4){
        ss >> com >> idDado >> nutritivos >> toxicidade;
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
        // Verifica se os pontos nutritivos inseridos sao validos
        if(!isNumber(nutritivos)){
            cout << "\nPontos Nutritivos invalidos...";
            return;
        }
        // Verifica se os pontos de toxicidade inseridos sao validos
        if(!isNumber(toxicidade)){
            cout << "\nPontos de Toxicidade invalidos...";
            return;
        }
    }else{
        cout << "\nNumero de argumentos incorreto...";
        return;
    }

    ptsNutritivos = stoi(nutritivos);
    ptsToxicidade = stoi(toxicidade);
    id = stoi(idDado);
}

comFeedid::comFeedid() = default;
