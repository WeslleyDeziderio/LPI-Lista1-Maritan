#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <string>

ControleDePagamentos::ControleDePagamentos(){
    pagamentosTotais = 0;
}

ControleDePagamentos::~ControleDePagamentos(){

}

void ControleDePagamentos::setPagamentos(Pagamento pagamento1){

}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeDoFuncionario){

}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double flag = 0;

    for(int i = 0; i < pagamentosTotais; i++){
        flag += pagamentos[i].getValorPagamento();
    }

    return flag;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){
    for(int i = 0; i < pagamentosTotais; i++){
        if (pagamentos[i].getNomeDoFuncionario() == nome){
            return true;
        }
    }

    return false;
}

void ControleDePagamentos::setPagamentos(Pagamento pagamento1){
    pagamentos[pagamentosTotais] = pagamento1;
    pagamentosTotais++;
}
