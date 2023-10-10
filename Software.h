#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Usuario.h"
using namespace std;


class Software{
    protected:
        string name;
        string developer;
        string edadClas;
        int precio;
        vector<Usuario*> lUsuarios;
    public:
        Software();
        virtual ~Software();
        string getName()const;
        void setName(string name);
        string getDeveloper()const;
        void setDeveloper(string developer);
        string getEdadClas()const;
        void setEdadClas(string edadClas);
        int getPrecio()const;
        void setPrecio(int precio);
        void agregarUsuario(Usuario* usuario);
        void mostrarUsuarios();
        void eliminarUsuario(string usuario);
        virtual void getInfo()const;
};

Software::Software(){};
Software::~Software(){};
string Software::getName() const{
    return this->name;
};
void Software::setName(string name){
    this->name = name;
};
string Software::getDeveloper()const{
    return this->developer;
};
void Software::setDeveloper(string developer){
    this->developer = developer;
};
string Software::getEdadClas()const{
    return this->edadClas;
};
void Software::setEdadClas(string edadClas){
    this->edadClas = edadClas;
};
int Software::getPrecio()const{
    return this->precio;
};
void Software::setPrecio(int precio){
    this->precio = precio;
};
void Software::agregarUsuario(Usuario* usuario){
    lUsuarios.push_back(usuario);
}
void Software::mostrarUsuarios(){
    cout << "Usuarios: " << endl;
    for (const Usuario* usuario : this->lUsuarios ) {
        cout <<usuario->getUsuario()<<endl;
    }
};
void Software::eliminarUsuario(string usuario){
    auto i = std::find_if(lUsuarios.begin(), lUsuarios.end(),
        [usuario](const Usuario* u) { return u->getUsuario() == usuario; });

    if (i != lUsuarios.end()) {
        lUsuarios.erase(i);
        cout << "Usuario eliminado: " << usuario << endl;
    } else {
        cout << "Usuario no encontrado: " << usuario << endl;
    }
};
void Software::getInfo()const{
    cout<<"Nombre Software: "<< this->name<<endl;
    cout<<"Desarrollador: "<<this->developer<<endl;
    cout<<"Clasificacion de dedad: "<<this->edadClas<<endl;
    cout<<"Precio: $"<<this->precio<<endl;
};