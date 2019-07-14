#include <iostream>
#include "Horario.h"

int main(void){
    Horario hora1 = Horario();

    int hora, minuto, segundo;
    char sel;

    std::cout << "Digite a hora: ";
    std::cin >> hora;
    std::cout << "Digite o minuto: ";
    std::cin >> minuto;
    std::cout << "Digite o segundo: ";
    std::cin >> segundo;

    hora1.setHorario(hora, minuto, segundo);

    std::cout << "Hora: " << hora1.getHora() << ":" << hora1.getMinuto() << ":" << hora1.getSegundo() << std::endl;

    for(int i = 0; ;i++){
        std::cout << "Avancar horario? (S/N)" << std::endl;
        std::cin >> sel;

        if(sel == 'S' || sel == 's'){
           hora1.avancarHorario();
           std::cout << "Horario atualizado: " << hora1.getHora() << ":" << hora1.getMinuto() << ":" << hora1.getSegundo() << std::endl;
        }
        if(sel == 'N' || sel == 'n'){
            break;
        }
    }

    std::cout << "Hora final: " << hora1.getHora() << ":" << hora1.getMinuto() << ":" << hora1.getSegundo() << std::endl;

    return 0;
}
