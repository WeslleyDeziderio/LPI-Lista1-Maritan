#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

int main(void){
    ControleDePagamentos controle1 = ControleDePagamentos();

    Pagamento pagamento1 = Pagamento(2299, "Jade");
    Pagamento pagamento2 = Pagamento(2299, "Alexandre");

    controle1.setPagamentos(pagamento1);
    controle1.setPagamentos(pagamento2);

    std::cout << controle1.calculaTotalDePagamentos();

    return 0;
}
