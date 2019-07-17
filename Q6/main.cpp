#include <iostream>
#include "Voo.h"

int main(void){
    Voo voo1();
    voo1.getNumVoo();
    voo1.data1().getDia();
    voo1.data1().getMes();
    voo1.data1().getAno();
    voo1.horario1.getHora();
    voo1.horario1.getMinuto();
    voo1.horario1.getSegundo();

    if(voo1.ocupa(55)){
        std::cout << "Ocupacao da cadeira realizada com sucesso." << std::endl;
    }else{
        std::cout << "Cadeira nao disponivel." << std::endl;
    }
    if(voo1.verifica(55)){
        std::cout << "Ocupada" << std::endl;
    }else{
        std::endl << "Desocupada" << std::endl;
    }

    std::cout << "Numero do voo: " << voo1.getNumVoo() std::endl;
    std::cout << "Data: " << voo1.data1.getDia() << "/" << voo1.data1().getMes() "/" << voo1.data().getAno() std::endl;
    std::cout << "Horario: " << voo1.horario1().getHora() << voo1.horario1.getMinuto() << voo1.horario1.getSegundo() std::endl;

    return 0;
}
