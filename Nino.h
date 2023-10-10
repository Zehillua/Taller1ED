#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Nino:public Usuario{
    private:

    public:
        Nino();
        ~Nino();
};

Nino::Nino():Usuario(){};
Nino::~Nino(){};