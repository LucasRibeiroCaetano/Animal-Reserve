#include "Utils/utils.h"
#include "Animais/animal.h"
#include "Alimentos/alimento.h"
#include "Reserva/reserva.h"
#include "Reserva/areaVisivel.h"


using namespace std;

int main() {
    Reserva reserva;
    areaVisivel area(reserva);

    cout << area.getCseX();



    return 0;
}
