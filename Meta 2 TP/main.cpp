#include "Reserva/reserva.h"
#include "Animais/animal.h"
#include "Alimentos/alimento.h"
#include "Utils/utils.h"
#include "Comandos/ComandHandler.h"

using namespace std;

int main() {
    int x, y;
    string input;

    //Criação de um objeto handler
    ComandHandler handler;

    cout << "\n(=====================|| Trabalho Final POO 2021/2022 ||=====================)" << endl;

    cout << "\nQual e a medida da area visivel que vai desejar (largura, altura)?\n>";

    while (true) {

        cin >> x >> y;

        if (!cin.fail()) {

            if (x > 500 || x <= 0 || y > 500 || y <= 0) {

                // Input mal sucedido
                cout << "Escolha numeros maiores que 0 e menores ou igual a 500\n>";

                //Limpar as flags do cin
                cin.clear();

                //Ignora todos os caracteres até ao '\n'
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                continue;
            }

            //Input bem sucedido
            break;
        }

        // Input mal sucedido
        cout << "Input Invalido. Tente Novamente...\n>";

        //Limpar as flags do cin
        cin.clear();

        //Ignora todos os caracteres até ao '\n'
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }

    Reserva reserva(x, y);

    cout << "\n";
    int result = 0;

    cout << "Informacao da Reserva: \n\n" << "NC:" << reserva.getNC()  << endl << "NL:" << reserva.getNL()  << endl << "CseX: " << reserva.getCseX() << "\nCseY: " << reserva.getCseY() << "\nLimX: " << reserva.getLimX() << "\nLimY: " << reserva.getLimY() <<  endl;

    do{

        reserva.mostraReserva();

        result =  handler.procuraComando(handler.pedeComando(), reserva);

        cout << "Result: " << result <<  endl;
    }
    while(result == 0 || result == 2);

    cout << "\nA terminar programa -- Ate a proxima!\n";

    return 0;
}
