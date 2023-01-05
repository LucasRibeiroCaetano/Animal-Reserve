#include "areaVisivel.h"
#include "reserva.h"

areaVisivel::areaVisivel(const Reserva& reserva): largura(50), altura(20) {

    unsigned seed = time(nullptr);
    srand(seed);

    cseX = rand()% (reserva.getNC() - largura) + 0;
    cseY = rand()% (reserva.getNL() - altura) + 0;

    limX = cseX + largura;
    limY = cseY + altura;

}
