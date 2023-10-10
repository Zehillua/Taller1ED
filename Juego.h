#pragma once
#include <iostream>
#include "Software.h"
using namespace std;

class Juego:public Software{
    private:
        string genero;
    public:
       Juego();
       virtual ~Juego();
       string getGenero()const;
       void setGenero(string genero);
       void getInfo()const override;
};

Juego::Juego(){};
Juego::~Juego(){};
string Juego::getGenero()const{
    return this->genero;
};
void Juego::setGenero(string genero){
    this->genero = genero;
};
void Juego::getInfo()const{
    Software::getInfo();
    cout<<this->genero<<endl;
};