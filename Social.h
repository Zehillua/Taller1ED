#pragma once
#include <iostream>
#include <vector>
#include "Software.h"
#include "Usuario.h"
using namespace std;

class Social:public Software{
    private:
       vector<Usuario*> lAmistades;
    public:
        Social();
        ~Social();
        void agregarAmistad(Usuario* usuario,Usuario* usuario2);
        void mostrarAmistades();
        void eliminarAmistad(string usuario);
        void getInfo()const override;
};

Social::Social():Software(){};
Social::~Social(){};
void Social::agregarAmistad(Usuario* usuario, Usuario* usuario2){
     if (usuario->getEdad() >= 18 && usuario2->getEdad() >= 18) {
        lAmistades.push_back(usuario);
        cout<<"Amistad agregada"<<endl;
        
    } else if(usuario->getEdad() <18 && usuario2->getEdad()<18){
        lAmistades.push_back(usuario2);
        cout<<"Amistad agregada"<<endl;
        
    }else{
        cout<<"No se puede agregar esta amistad por la diferencia de edad."<<endl;
    }
};
void Social::mostrarAmistades(){
    cout << "Amistades: " << endl;
    for (const Usuario* usuario : this->lAmistades) {
        cout <<usuario->getUsuario()<<endl;
    }
};
void Social::eliminarAmistad(string usuario) {
    auto i = std::find_if(lAmistades.begin(), lAmistades.end(),
        [usuario](const Usuario* u) { return u->getUsuario() == usuario; });

    if (i != lAmistades.end()) {
        lAmistades.erase(i);
        cout << "Usuario eliminado: " << usuario << endl;
        
    } else {
        cout << "Usuario no encontrado: " << usuario << endl;
    }
};
void Social::getInfo()const{
    Software::getInfo();
};