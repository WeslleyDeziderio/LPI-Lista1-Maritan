#include "ControleDePagamentos.h"
#include "Pagamento.h"

ControleDePagamentos::ControleDePagamentos(){
    pagamentosTotais = 0;
}

ControleDePagamentos::~ControleDePagamentos(){

}

void ControleDePagamentos::setPagamentos(pagamento){

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
    pagamentos[totais] = pagamento1;
    totais++;
}
