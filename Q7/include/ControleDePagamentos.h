#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include "string"

class ControleDePagamentos{
    public:
        ControleDePagamentos();
        virtual ~ControleDePagamentos();
        void setPagamentos(pagamento);
        bool existePagamentoParaFuncionario(std::string nomeDoFuncionario);
        double calculaTotalDePagamentos(double valorDoPagamento);
    private:
        Pagamento pagamento[11];
        int pagamentosTotais;
};

#endif
