#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento{
    public:
        Pagamento(double valorPagamento, std::string nomeDoFuncionario);
        virtual ~Pagamento();

        void setValorPagamento(double valorPagamento);
        void setNomeFuncionario(std::string nomeDoFuncionario);

        double getValorPagamento();
        std::string getNomeFuncionario();
    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
};

#endif
