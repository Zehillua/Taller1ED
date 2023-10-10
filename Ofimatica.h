#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

class Ofimatica:public Software{
    private:
        int cantArch;
    public:
        Ofimatica();
        ~Ofimatica();
        int getCantArch()const;
        void setCantArch(int cantArch);
        void getInfo()const override;
};

Ofimatica::Ofimatica():Software(){};
Ofimatica::~Ofimatica(){};
int Ofimatica::getCantArch()const{
    return this->getCantArch();
};
void Ofimatica::setCantArch(int cantArch){
    this->cantArch = cantArch;
};
void Ofimatica::getInfo()const{
    Software::getInfo();
    cout<<this->cantArch<<endl;
};
