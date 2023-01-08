#include "comFeed.h"

void comFeed::execute(const string &comando) {
    int n = contaPalavras(comando);
    int nLinha, nColuna, ptsNutritivos, ptsToxicidade;

    string com, linha, coluna, nutritivos, toxicidade;
    stringstream ss(comando);
    if(n == 5){
        ss >> com >> linha >> coluna >> nutritivos >> toxicidade;

        //Verifica se a linha e a coluna sao inteiros
        if(isNumber(linha)|| isNumber(coluna)) {
            //Verifica se a linha e coluna estao dentro da reserva
            // if(stoi(linha) > NL || stoi(coluna) > NC|| ){
            cout << "\nCoordenadas fora da reserva...";
            return;
            //}
        }else{
            cout << "\nCoordenadas invalidas...";
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

    nLinha = stoi(linha);
    nColuna = stoi(coluna);
    ptsNutritivos = stoi(nutritivos);
    ptsToxicidade = stoi(toxicidade);

}
