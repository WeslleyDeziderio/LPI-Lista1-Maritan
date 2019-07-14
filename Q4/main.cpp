#include <iostream>
#include "Data.h"

int main(void){
    Data data1(32, 13, 2020);
    Data data2(-1, -2, 2016);
    Data data3(01, 01, 0001);

    std::cout << "A data eh: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno() << std::endl;
    std::cout << data1.compara() << std::endl;
    std::cout << "O mes inserido foi: " << data1.getMesExtenso() << std::endl;

    if(data1.isBissexto()){
        std::cout << "O ano eh bissexto!" << std::endl << std::endl;
    }else{
        std::cout << "O ano nao eh bissexto!" << std::endl << std::endl;
    }

    std::cout << "A data eh: " << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno() << std::endl;
    std::cout << data2.compara() << std::endl;
    std::cout << "O mes inserido foi: " << data2.getMesExtenso() << std::endl;

    if(data2.isBissexto()){
        std::cout << "O ano eh bissexto!" << std::endl << std::endl;
    }else{
        std::cout << "O ano nao eh bissexto!" << std::endl << std::endl;
    }

    std::cout << "A data eh: " << data3.getDia() << "/" << data3.getMes() << "/" << data3.getAno() << std::endl;
    std::cout << data3.compara() << std::endl;
    std::cout << "O mes inserido foi: " << data3.getMesExtenso() << std::endl;

    if(data3.isBissexto()){
        std::cout << "O ano eh bissexto!" << std::endl << std::endl;
    }else{
        std::cout << "O ano nao eh bissexto!" << std::endl << std::endl;
    }
    return 0;
}
