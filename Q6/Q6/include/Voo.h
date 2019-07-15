#ifndef VOO_H
#define VOO_H
#include "Horario.h"
#include "Data.h"

class Voo{
    public:
        Voo();
        virtual ~Voo();

        int proximoLivre();
        int verifica(int lugares);
        bool ocupa();
        int vagas();

        getNumVoo();
        getData();
        getHorario();

    private:
        int numeroVoo, dataVoo, horarioVoo;
        int lugares = 100;
};

#endif
