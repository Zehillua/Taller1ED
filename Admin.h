#pragma once
#include <iostream>
#include "Usuario.h"
using namespace std;

class Admin:public Usuario{
    private:

    public:
        Admin();
        ~Admin();
};

Admin::Admin():Usuario(){};
Admin::~Admin(){};