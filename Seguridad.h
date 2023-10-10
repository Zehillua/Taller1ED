#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

class Seguridad:public Software{
    private:
        string tipoM;
    public:
        Seguridad();
        ~Seguridad();
        string getTipo();
        void setTipo(string tipo);
        void getInfo()const override;
};

Seguridad::Seguridad():Software(){};
Seguridad::~Seguridad(){};
string Seguridad::getTipo(){
    return this->tipoM;
};
void Seguridad::setTipo(string tipoM){
    this->tipoM = tipoM;
};
void Seguridad::getInfo()const{
    Software::getInfo();
    cout<<this->tipoM<<endl;
};