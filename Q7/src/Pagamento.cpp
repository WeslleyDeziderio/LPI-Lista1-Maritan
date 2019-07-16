#include "Pagamento.h"

Pagamento::Pagamento(double valorPagamento, std::string nomeDoFuncionario){
    this->valorPagamento = valorPagamento;
    this->nomeDoFuncionario = nomeDoFuncionario;
}

Pagamento::~Pagamento(){

}

void Pagamento::setValorPagamento(double valorPagamento){
    this->valorPagamento = valorPagamento;
}

void Pagamento::setNomeFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

std::string Pagamento::getNomeFuncionario(){
    return nomeDoFuncionario;
}

