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
