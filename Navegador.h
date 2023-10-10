#pragma once
#include <iostream>
#include <vector>
#include "Software.h"
using namespace std;

class Navegador:public Software{
    private:
        vector<string> lPaginas;
    public:
        Navegador();
        ~Navegador();
        void agregarPagina(string pagina);
        void mostrarPaginas();
        void getInfo()const override;
};

Navegador::Navegador():Software(){};
Navegador::~Navegador(){};
void Navegador::agregarPagina(string pagina){
    lPaginas.push_back(pagina);
};
void Navegador::mostrarPaginas(){
    cout << "Últimas 10 páginas visitadas: " << endl;
    int startIndex = max(0, static_cast<int>(lPaginas.size()) - 10);

    for (int i = startIndex; i < lPaginas.size(); i++) {
        cout << lPaginas[i] << endl;
    }
};
void Navegador::getInfo()const{
    Software::getInfo();
};