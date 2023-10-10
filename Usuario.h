#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Usuario{
    protected:
        string usuario;
        string pass;
        int edad;
        string correo;
        int money;
        vector<string> biblioteca;
        
    public:
        Usuario();
        virtual ~Usuario();
        string getUsuario()const;
        void setUsuario(string usuario);
        string getPass()const;
        void setPass(string pass);
        int getEdad()const;
        void setEdad(int edad);
        string getCorreo()const;
        void setCorreo(string correo);
        int getMoney()const;
        void setMoney(int money);
        void agregarSoftware(string software, int edad, string edadClas);
        bool mostrarSoftware();
        void eliminarSoftware(string software);
        int getSize();
        int getIndex(const string& software);
        vector<string> getLista()const;
};

Usuario::Usuario(){};
Usuario::~Usuario(){};
string Usuario::getUsuario()const{
    return this->usuario;
};
void Usuario::setUsuario(string usuario) {
    this->usuario = usuario;
};
string Usuario::getPass()const{
    return this->pass;
};
void Usuario::setPass(string pass) {
    this->pass = pass;
};
int Usuario::getEdad()const{
    return this->edad;
};
void Usuario::setEdad(int edad) {
    this->edad = edad;
};
string Usuario::getCorreo()const{
    return this->correo;
};
void Usuario::setCorreo(string correo) {
    this->correo = correo;
};
int Usuario::getMoney()const{
    return this->money;
};
void Usuario::setMoney(int money){
    this->money = money;
};
void Usuario::agregarSoftware(string software,int edad, string edadClas){
    if(edadClas =="+18" && edad >=18){
        biblioteca.push_back(software);
    }else if(edadClas =="+7" && edad >=7){
        biblioteca.push_back(software);
    }else{
        cout<<"Su edad no es para este tipo de juegos, necesita ser mayor de 18 de edad."<<endl;
    }
    
};
bool Usuario::mostrarSoftware(){
    if(biblioteca.size()==0){
        cout<<"No tiene ningun Software."<<endl;
        return false;
    }else{
        int i=1;
        cout<<"Biblioteca:"<<endl;
        for(const string& software:biblioteca){
            cout<<i<<") "<<software<<endl;
            i++;
        }
        return true;
    }
    
};
void Usuario::eliminarSoftware(string software){
    auto i = std::find(biblioteca.begin(), biblioteca.end(), software);

    if (i != biblioteca.end()) {
        biblioteca.erase(i);
        cout << "Software eliminado: " << software << endl;
    } else {
        cout << "Software no encontrado: " << software << endl;
    }
};
int Usuario::getSize(){
    return biblioteca.size();
};
int Usuario::getIndex(const string& software){
    for(int i=1; i<biblioteca.size(); i++) { 
        if(biblioteca[i]==software){
            return i;
        }
    }
    return -1;
};
vector<string> Usuario::getLista() const {
    return biblioteca;
};