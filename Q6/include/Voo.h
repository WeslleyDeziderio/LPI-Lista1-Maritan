#ifndef VOO_H
#define VOO_H

#include "Horario.h"
#include "Data.h"

#define NUMERO_VAGAS 100

class Voo{
    public:
        Voo();
        Voo(int numeroVoo, bool numeroVagas[NUMERO_VAGAS], Data data1, Horario horario1);
        virtual ~Voo();
        int proximoLivre();
        bool verifica(int cadeira);
        bool ocupa(int cadeira);
        int vagas();
        int getNumVoo();
        Data getData();
        Horario getHorario();

    private:
        int numeroVoo;
        bool numeroVagas[NUMERO_VAGAS];
        Data data1;
        Horario horario1;
};

#endif
