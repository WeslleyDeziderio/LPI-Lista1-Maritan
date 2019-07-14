#include <iostream>
#include "Invoice.h"

int main(void){
    Invoice fatura1("Pen drive", 10, 01344743, 7.90);
    Invoice fatura2("Notebook", 2, 04765432, 2.229);
    Invoice fatura3("fone de ouvido", 4, 03223457, 79.90);

    std::cout << "Produto comprado: " << fatura1.getDesc() << std::endl;
    std::cout << "Preco: " << fatura1.getPreco() << " R$" << std::endl;
    std::cout << "Quantidade: " << fatura1.getQnt() << std::endl;
    std::cout << "Numero do item: " << fatura1.getNum() << std::endl << std::endl;
    std::cout << "Total desta fatura: " << fatura1.getInvoiceAmount() << "R$" << std::endl <<std::endl;

    std::cout << "Produto comprado: " << fatura2.getDesc() << std::endl;
    std::cout << "Preco: " << fatura2.getPreco() << " R$" << std::endl;
    std::cout << "Quantidade: " << fatura2.getQnt() << std::endl;
    std::cout << "Numero do item: " << fatura2.getNum() << std::endl << std::endl;
    std::cout << "Total desta fatura: " << fatura2.getInvoiceAmount() << "R$" << std::endl << std::endl;

    std::cout << "Produto comprado: " << fatura3.getDesc() << std::endl;
    std::cout << "Preco: " << fatura3.getPreco() << " R$" << std::endl;
    std::cout << "Quantidade: " << fatura3.getQnt() << std::endl;
    std::cout << "Numero do item: " << fatura3.getNum() << std::endl << std::endl;
    std::cout << "Total desta fatura: " << fatura3.getInvoiceAmount() << "R$" << std::endl;

    return 0;
}
