#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class UsuarioN:public Usuario{
    private:

    public:
        UsuarioN();
        ~UsuarioN();
};

UsuarioN::UsuarioN():Usuario(){};
UsuarioN::~UsuarioN(){};