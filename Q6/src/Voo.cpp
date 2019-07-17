#include "Voo.h"

Voo::Voo(){
    numeroVoo = 1;
    for(int i = 0; i < NUMERO_VAGAS; i++){
        numeroVagas[i] = false;
    }
    Horario();
    Data()
}

Voo::Voo(int numeroVoo, bool numeroVagas[NUMERO_VAGAS], Data data1, Horario horario1){
    this->numeroVoo = numeroVoo;
    for(int i = 0; i < NUMERO_VAGAS; i++){
        this->numeroVagas[i] = numeroVagas[i];
    }
    this->data1 = data1;
    this->horario1 = horario1;
}

Voo::~Voo(){

}

int Voo::proximoLivre(){
    for(int i = 0; i < NUMERO_VAGAS; i++){
        if(numeroVagas[i] == false){
            return i;
        }
    }

    return -1;
}

bool Voo::verifica(int cadeira){
     if(numeroVagas[cadeira] == false){
        return true;
     }else{
        return false;
     }
}

bool Voo::ocupa(int cadeira){
    if(verifica(cadeira)){
        numeroVagas[cadeira] = true;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int flag = 0;

    for(int i = 0; i < NUMERO_VAGAS; i++){
        if(numeroVagas[i] == false){
            flag++;
        }
    }

    return flag;
}

int Voo::getNumVoo(){
    return numeroVoo;
}

Data Voo::getData(){
    return data1;
}

Horario Voo::getHorario(){
    return horario1;
}
