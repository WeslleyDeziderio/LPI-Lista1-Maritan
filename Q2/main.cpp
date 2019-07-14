#include <iostream>
#include "Pessoa.h"

int main(void){
    Pessoa pessoa1 = Pessoa("Alexandre");
    Pessoa pessoa2 = Pessoa("Cesar", "8834-0312", 19);

    std::cout << "Dados da primeira pessoa" << std::endl;
    std::cout << "Nome: " << pessoa1.getNome() << std::endl;

    std::cout << "Dados da segunda pessoa" << std::endl;
    std::cout << "Nome: " << pessoa2.getNome() << std::endl;
    std::cout << "Telefone: " << pessoa2.getTelefone() << std::endl;
    std::cout << "Idade: " << pessoa2.getIdade() << std::endl;

    return 0;
}
