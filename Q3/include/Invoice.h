#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice{
    public:
        Invoice(std::string descItem, int qntComprada, int numItem, double precoUnit);
        virtual ~Invoice();

        std::string getDesc();
        int getQnt();
        int getNum();
        double getPreco();
        double getInvoiceAmount();

        void setDesc(std::string descItem);
        void setQnt(int qntComprada);
        void setNum(int numItem);
        void setPreco(double precoUnit);

    protected:

    private:
        std::string descItem;
        int qntComprada, numItem;
        double precoUnit;
};

#endif
