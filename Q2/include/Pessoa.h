#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa{
    private:
        int idade;
        std::string nome, telefone;
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome, std::string telefone, int idade);
        virtual ~Pessoa();

        std::string getNome();
        std::string getTelefone();
        int getIdade();

        void setNome(std::string nome);
        void setTelefone(std::string telefone);
        void setIdade(int idade);
    protected:
};

#endif
