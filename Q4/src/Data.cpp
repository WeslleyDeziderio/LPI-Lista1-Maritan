#include "Data.h"

Data::Data(){

}

Data::Data(int dia, int mes, int ano){
    this->ano = ((ano >= 0001) && (ano <= 2019)) ? ano: 0001;
    this->dia = ((dia >= 1) && (dia <= 31)) ? dia: 1;
    this->mes = ((mes >= 1) && (mes <= 12)) ? mes: 1;
}

Data::~Data(){

}

int Data::compara(){
    if(this->ano == ano && this->mes == ano && this->dia == dia){
        return 0;
    }
    else if(this->ano == ano){
        if(this->mes == mes){
            return this->dia > dia ? 1 : -1;
        }else{
            return this->mes > mes ? 1 : -1;
        }
    }else{
        return this->ano > ano ? 1 : -1;
    }
}

bool Data::isBissexto(){
    if(this->ano % 4 == 0 && (this->ano % 400 == 0 || this->ano % 100 != 0)){
        return true;
    }else{
        return false;
    }
}

std::string Data::getMesExtenso(){
    if(this->mes == 1){
        return "janeiro";
    }
    if(this->mes == 2){
        return "fevereiro";
    }
    if(this->mes == 3){
        return "marco";
    }
    if(this->mes == 4){
        return "abril";
    }
    if(this->mes == 5){
        return "maio";
    }
    if(this->mes == 6){
        return "junho";
    }
    if(this->mes == 7){
        return "julho";
    }
    if(this->mes == 8){
        return "agosto";
    }
    if(this->mes == 9){
        return "setembro";
    }
    if(this->mes == 10){
        return "outubro";
    }
    if(this->mes == 11){
        return "novembro";
    }
    if(this->mes == 12){
        return "dezembro";
    }
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setMes(int mes){
    this->mes = mes;
}

void Data::setAno(int ano){
    this->ano = ano;
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}
