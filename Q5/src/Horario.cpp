#include "Horario.h"

Horario::Horario(){
    hora = minuto = segundo = 0;
}

Horario::Horario(int hora, int minuto, int segundo){
    this->hora = ((hora >= 01) && (hora <= 24)) ? hora :00;
    this->minuto = ((minuto >= 01) && (minuto <= 60)) ? minuto :00;
    this->segundo = ((segundo >= 01) && (segundo <= 60)) ? segundo :00;
}

Horario::~Horario(){

}

void Horario::setHorario(int hora, int minuto, int segundo){
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

int Horario::avancarHorario(){
    segundo++;
    if(segundo > 59){
        segundo = 0;
        minuto++;
    }
    if(minuto > 59){
        minuto = 0;
        hora++;
    }
    if(hora > 23){
        hora = 0;
    }
}

void Horario::setHora(int hora){
    this->hora = hora;
}

void Horario::setMinuto(int minuto){
    this->minuto = minuto;
}

void Horario::setSegundo(int segundo){
    this->segundo = segundo;
}

int Horario::getHora(){
    return hora;
}

int Horario::getMinuto(){
    return minuto;
}

int Horario::getSegundo(){
    return segundo;
}
