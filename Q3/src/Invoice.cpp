#include "Invoice.h"

Invoice::Invoice(std::string descItem, int qntComprada, int numItem, double precoUnit){
    this->descItem = descItem;
    this->qntComprada = qntComprada;
    this->numItem = numItem;
    this->precoUnit = precoUnit;
}

Invoice::~Invoice(){

}

std::string Invoice::getDesc(){
    return descItem;
}

int Invoice::getQnt(){
    return qntComprada;
}

int Invoice::getNum(){
    return numItem;
}

double Invoice::getPreco(){
    return precoUnit;
}

double Invoice::getInvoiceAmount(){
    double amount = qntComprada*precoUnit;

    if(qntComprada < 0){
        this->qntComprada = 0;
    }
    if(precoUnit < 0){
        this->precoUnit = 0;
    }

    return amount;
}

void Invoice::setDesc(std::string descItem){
    this->descItem = descItem;
}

void Invoice::setQnt(int qntComprada){
    this->qntComprada = qntComprada;
}

void Invoice::setNum(int numItem){
    this->numItem = numItem;
}

void Invoice::setPreco(double precoUnit){
    this->precoUnit = precoUnit;
}
