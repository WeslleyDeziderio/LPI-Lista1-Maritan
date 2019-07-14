#ifndef HORARIO_H
#define HORARIO_H

class Horario{
    public:
        Horario();
        Horario(int hora, int minuto, int segundo);
        virtual ~Horario();

        void setHorario(int hora, int minuto, int segundo);
        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);

        int getHora();
        int getMinuto();
        int getSegundo();
        int avancarHorario();
    private:
        int hora, minuto, segundo;
};

#endif
