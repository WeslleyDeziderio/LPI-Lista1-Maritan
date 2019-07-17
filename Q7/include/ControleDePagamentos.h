#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

class ControleDePagamentos{
    public:
        ControleDePagamentos();
        virtual ~ControleDePagamentos();
        void setPagamentos(Pagamento pagamento1);
        bool existePagamentoParaFuncionario(std::string nomeDoFuncionario);
        double calculaTotalDePagamentos();
    private:
        Pagamento pagamento[5];
        int pagamentosTotais;
};

#endif
