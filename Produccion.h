#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

class Produccion:public Software{
    private:
        string tipo;
    public:
        Produccion();
        ~Produccion();
        string getTipo() const;
        void setTipo(string tipo);
        void getInfo()const override;
};

Produccion::Produccion():Software(){};
Produccion::~Produccion(){};
string Produccion::getTipo() const{
    return this->tipo;
};
void Produccion::setTipo(string tipo){
    this->tipo = tipo;
};
void Produccion::getInfo()const{
    Software::getInfo();
    cout<<this->tipo<<endl;
};
