#include "areaVisivel.h"
#include "reserva.h"

areaVisivel::areaVisivel(): largura(50), altura(20) {

    unsigned seed = time(nullptr);
    srand(seed);

    cseX = rand()% (Reserva::instance->getNC() - largura) + 0;
    cseY = rand()% (Reserva::instance->getNL() - altura) + 0;

    limX = cseX + largura;
    limY = cseY + altura;

}

int areaVisivel::getCseX() const{
    return cseX;
}

int areaVisivel::getCseY() const{
    return cseY;
}

int areaVisivel::getLimX() const{
    return limX;
}

int areaVisivel::getLimY() const{
    return limY;
}

void areaVisivel::mostraReserva(Reserva &reserva) const{

    //Atualiza reserva
    //TODO: Este método irá verificar se na primeira posição do array de animais está algum animal se tiver,
    //      então o caracter a ser mostrado irá ser o caracter desse animal "animalEmCausa.getDisplay()".
    //      Se dentro do array de animais não estiver nada, vamos verificar se existe alguma comida.
    //      Se existir comida então mostramos o caractér da comida "comida.getDisplay()".

    for(int i = 0; i < reserva.getNC(); i++){

        for(int j = 0; j < reserva.getNL(); j++){

            /*
             * if(animais dentro da lista)
             *      mostrar o caracter do primeiro animal
             * else if
             *      ver se existem comidas
             * else
             *      se não existirem comidas, mostrar o caracter default pode ser por exemplo um '_'
            */
        }

    }


    //Mostra a reserva atualizada
    for(int i = 0; i < reserva.getNC(); i++){

        for(int j = 0; j < reserva.getNL(); j++){

            cout << reserva.getSegmentos()[i][j].getDisplay();

        }

        cout << '\n';
    }

}
