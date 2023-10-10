#include <iostream>
#include <stdio.h>
#include <vector>
#include "Usuario.h"
#include "Software.h"
#include "Admin.h"
#include "Juego.h"
#include "Navegador.h"
#include "Nino.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Seguridad.h"
#include "Social.h"
#include "UsuarioN.h"
using namespace std;

void cargarDatosUsuarios(vector<Usuario*>& listaUsuarios){
    //Se crea y agrega el objeto admin a la lista de usuarios
    Admin* admin = new Admin();
    admin->setUsuario("Jose");
    admin->setPass("123123");
    admin->setEdad(30);
    admin->setCorreo("admin@admin.cl");
    admin->setMoney(9999999);
    listaUsuarios.push_back(admin);

    //Se crea y agrega el objeto nino a la lista de usuarios
    Nino* nino1 = new Nino();
    nino1->setUsuario("Itadori");
    nino1->setPass("890890");
    nino1->setEdad(15);
    nino1->setCorreo("itadori@jujutsu.cl");
    nino1->setMoney(20000);

    Nino* nino2 = new Nino();
    nino2->setUsuario("Kazuma");
    nino2->setPass("456456");
    nino2->setEdad(17);
    nino2->setCorreo("isekai@kono.cl");
    nino2->setMoney(20000);

    Nino* nino3 = new Nino();
    nino3->setUsuario("Alexis");
    nino3->setPass("789789");
    nino3->setEdad(7);
    nino3->setCorreo("alexis@chile.cl");
    nino3->setMoney(20000);

    Nino* nino4 = new Nino();
    nino4->setUsuario("Killua");
    nino4->setPass("111111");
    nino4->setEdad(10);
    nino4->setCorreo("killlua@hxh.cl");
    nino4->setMoney(200000);

    listaUsuarios.push_back(nino1);
    listaUsuarios.push_back(nino2);
    listaUsuarios.push_back(nino3);
    listaUsuarios.push_back(nino4);

    //Se crea y agrega el objeto usuarioN a la lista de usuarios
    UsuarioN* usuario1 = new UsuarioN();
    usuario1->setUsuario("Anakin");
    usuario1->setPass("padme<3");
    usuario1->setEdad(18);
    usuario1->setCorreo("anakin@anakin.cl");
    usuario1->setMoney(200000);

    UsuarioN* usuario2 = new UsuarioN();
    usuario2->setUsuario("Makise");
    usuario2->setPass("lab004");
    usuario2->setEdad(19);
    usuario2->setCorreo("makise@makise.cl");
    usuario2->setMoney(50000);

    UsuarioN* usuario3 = new UsuarioN();
    usuario3->setUsuario("Cristiano Ronaldo");
    usuario3->setPass("champions");
    usuario3->setEdad(38);
    usuario3->setCorreo("cr7@cr7.cl");
    usuario3->setMoney(2000000);

    UsuarioN* usuario4 = new UsuarioN();
    usuario4->setUsuario("Thorfinn");
    usuario4->setPass("noenemigos");
    usuario4->setEdad(24);
    usuario4->setCorreo("thors@thors.cl");
    usuario4->setMoney(60000);

    UsuarioN* usuario5 = new UsuarioN();
    usuario5->setUsuario("Gojo");
    usuario5->setPass("geto:c");
    usuario5->setEdad(28);
    usuario5->setCorreo("gojo@gojo.cl");
    usuario5->setMoney(20000000);

    UsuarioN* usuario6 = new UsuarioN();
    usuario6->setUsuario("Eren");
    usuario6->setPass("venganza123");
    usuario6->setEdad(22);
    usuario6->setCorreo("eren@eren.cl");
    usuario6->setMoney(150000);

    UsuarioN* usuario7 = new UsuarioN();
    usuario7->setUsuario("Gon");
    usuario7->setPass("kite");
    usuario7->setEdad(18);
    usuario7->setCorreo("gon@gon.cl");
    usuario7->setMoney(20000);

    UsuarioN* usuario8 = new UsuarioN();
    usuario8->setUsuario("Shin Hati");
    usuario8->setPass("star000");
    usuario8->setEdad(23);
    usuario8->setCorreo("wars1@wars1.cl");
    usuario8->setMoney(100000);

    UsuarioN* usuario9 = new UsuarioN();
    usuario9->setUsuario("Okabe");
    usuario9->setPass("platano1");
    usuario9->setEdad(26);
    usuario9->setCorreo("okabe@okabe.cl");
    usuario9->setMoney(15000);

    UsuarioN* usuario10 = new UsuarioN();
    usuario10->setUsuario("Elizabeth");
    usuario10->setPass("booker");
    usuario10->setEdad(24);
    usuario10->setCorreo("elizabeth@elizabeth.cl");
    usuario10->setMoney(2000000);

    listaUsuarios.push_back(usuario1);
    listaUsuarios.push_back(usuario2);
    listaUsuarios.push_back(usuario3);
    listaUsuarios.push_back(usuario4);
    listaUsuarios.push_back(usuario5);
    listaUsuarios.push_back(usuario6);
    listaUsuarios.push_back(usuario7);
    listaUsuarios.push_back(usuario8);
    listaUsuarios.push_back(usuario9);
    listaUsuarios.push_back(usuario10);
}

void cargarDatosSoftware(vector<Software*>& listaSoftwares){
    // Crear objetos de Juego y agregarlos a la lista de Softwares
    Juego* juego1 = new Juego();
    juego1->setName("Bioshock Infinite");
    juego1->setDeveloper("Irrational Games");
    juego1->setEdadClas("+18");
    juego1->setPrecio(14500);
    juego1->setGenero("FPS");

    Juego* juego2 = new Juego();
    juego2->setName("Prototype");
    juego2->setDeveloper("Radical Entertainment");
    juego2->setEdadClas("+18");
    juego2->setPrecio(14900);
    juego2->setGenero("Mundo Abierto");

    Juego* juego3 = new Juego();
    juego3->setName("Dead Space");
    juego3->setDeveloper("Motive");
    juego3->setEdadClas("+18");
    juego3->setPrecio(46900);
    juego3->setGenero("Terror");

    Juego* juego4 = new Juego();
    juego4->setName("Silent Hill 2");
    juego4->setDeveloper("Bloober Team SA");
    juego4->setEdadClas("+18");
    juego4->setPrecio(45000);
    juego4->setGenero("Terror Psicologico");

    Juego* juego5 = new Juego();
    juego5->setName("Assassins Creed 2");
    juego5->setDeveloper("Ubisoft Montreal");
    juego5->setEdadClas("+18");
    juego5->setPrecio(12900);
    juego5->setGenero("Accion");

    Juego* juego6 = new Juego();
    juego6->setName("Cry of Fear");
    juego6->setDeveloper("Team Psykskallar");
    juego6->setEdadClas("+18");
    juego6->setPrecio(0);
    juego6->setGenero("Terror Psicologico");

    Juego* juego7 = new Juego();
    juego7->setName("FIFA 2024");
    juego7->setDeveloper("EA Canada & EA Romania");
    juego7->setEdadClas("+7");
    juego7->setPrecio(55900);
    juego7->setGenero("Deportes");

    Juego* juego8 = new Juego();
    juego8->setName("Battlefield 1");
    juego8->setDeveloper("DICE");
    juego8->setEdadClas("+18");
    juego8->setPrecio(31900);
    juego8->setGenero("Accion");

    Juego* juego9 = new Juego();
    juego9->setName("Nier:Automata");
    juego9->setDeveloper("Square Enix");
    juego9->setEdadClas("+18");
    juego9->setPrecio(29931);
    juego9->setGenero("Rol");

    Juego* juego10 = new Juego();
    juego10->setName("NBA 2K24 Black Mamba Edition");
    juego10->setDeveloper("Visual Concepts");
    juego10->setEdadClas("+7");
    juego10->setPrecio(79990);
    juego10->setGenero("Deportes"); 

    Juego* juego11 = new Juego();
    juego11->setName("Tomb Raider");
    juego11->setDeveloper("Crystal Dynamics");
    juego11->setEdadClas("+18");
    juego11->setPrecio(10000);
    juego11->setGenero("Aventura");

    Juego* juego12 = new Juego();
    juego12->setName("Left 4 Dead 2");
    juego12->setDeveloper("Valve");
    juego12->setEdadClas("+18");
    juego12->setPrecio(5750);
    juego12->setGenero("Zombies");

    Juego* juego13 = new Juego();
    juego13->setName("The Walking Dead");
    juego13->setDeveloper("Telltale Games");
    juego13->setEdadClas("+18");
    juego13->setPrecio(6466);
    juego13->setGenero("Zombies");

    Juego* juego14 = new Juego();
    juego14->setName("Dota 2");
    juego14->setDeveloper("Valve Corporation");
    juego14->setEdadClas("+7");
    juego14->setPrecio(0);
    juego14->setGenero("MOBA");

    Juego* juego15 = new Juego();
    juego15->setName("League of Legends");
    juego15->setDeveloper("Riot Games");
    juego15->setEdadClas("+7");
    juego15->setPrecio(0);
    juego15->setGenero("MOBA");

    Juego* juego16 = new Juego();
    juego16->setName("Valorant");
    juego16->setDeveloper("Riot Games");
    juego16->setEdadClas("+7");
    juego16->setPrecio(0);
    juego16->setGenero("FPS");

    Juego* juego17 = new Juego();
    juego17->setName("GTA 5");
    juego17->setDeveloper("Rockstar North");
    juego17->setEdadClas("+18");
    juego17->setPrecio(27191);
    juego17->setGenero("Mundo Abierto");

    Juego* juego18 = new Juego();
    juego18->setName("Subnautica");
    juego18->setDeveloper("Unknown Worlds Entertainment");
    juego18->setEdadClas("+7");
    juego18->setPrecio(11500);
    juego18->setGenero("Aventura");

    Juego* juego19 = new Juego();
    juego19->setName("Resident Evil 2 Remake");
    juego19->setDeveloper("CAPCOM Co");
    juego19->setEdadClas("+18");
    juego19->setPrecio(32200);
    juego19->setGenero("Terror");

    Juego* juego20 = new Juego();
    juego20->setName("Bladur's Gate 3");
    juego20->setDeveloper("Larian Studios");
    juego20->setEdadClas("+18");
    juego20->setPrecio(39999);
    juego20->setGenero("ROL");

    listaSoftwares.push_back(juego1);
    listaSoftwares.push_back(juego2);
    listaSoftwares.push_back(juego3);
    listaSoftwares.push_back(juego4);
    listaSoftwares.push_back(juego5);
    listaSoftwares.push_back(juego6);
    listaSoftwares.push_back(juego7);
    listaSoftwares.push_back(juego8);
    listaSoftwares.push_back(juego9);
    listaSoftwares.push_back(juego10);
    listaSoftwares.push_back(juego11);
    listaSoftwares.push_back(juego12);
    listaSoftwares.push_back(juego13);
    listaSoftwares.push_back(juego14);
    listaSoftwares.push_back(juego15);
    listaSoftwares.push_back(juego16);
    listaSoftwares.push_back(juego17);
    listaSoftwares.push_back(juego18);
    listaSoftwares.push_back(juego19);
    listaSoftwares.push_back(juego20);

    //Crear objetos de Ofimatica y agregarlos a la lista de Softwares
    Ofimatica* ofimatica1 = new Ofimatica();
    ofimatica1->setName("Microsoft Office");
    ofimatica1->setDeveloper("Microsoft Corporation");
    ofimatica1->setEdadClas("+7");
    ofimatica1->setPrecio(6990);
    ofimatica1->setCantArch(0);

    Ofimatica* ofimatica2 = new Ofimatica();
    ofimatica2->setName("LibreOffice");
    ofimatica2->setDeveloper("The Document Foundation");
    ofimatica2->setEdadClas("+7");
    ofimatica2->setPrecio(0);
    ofimatica2->setCantArch(0);

    Ofimatica* ofimatica3 = new Ofimatica();
    ofimatica3->setName("Google Workspace");
    ofimatica3->setDeveloper("Google");
    ofimatica3->setEdadClas("+7");
    ofimatica3->setPrecio(57790);
    ofimatica3->setCantArch(0);

    Ofimatica* ofimatica4 = new Ofimatica();
    ofimatica4->setName("Apache OpenOffice");
    ofimatica4->setDeveloper("Apache Software Foundation");
    ofimatica4->setEdadClas("+7");
    ofimatica4->setPrecio(0);
    ofimatica4->setCantArch(0);

    Ofimatica* ofimatica5 = new Ofimatica();
    ofimatica5->setName("WPS Office");
    ofimatica5->setDeveloper("Kingsoft Office");
    ofimatica5->setEdadClas("+7");
    ofimatica5->setPrecio(27450);
    ofimatica5->setCantArch(0);

    // Agregar objetos a la lista lista
    listaSoftwares.push_back(ofimatica1);
    listaSoftwares.push_back(ofimatica2);
    listaSoftwares.push_back(ofimatica3);
    listaSoftwares.push_back(ofimatica4);
    listaSoftwares.push_back(ofimatica5);

    //Crear objetos de Produccion y agregarlos a la lista de Softwares
    Produccion* produccion1 = new Produccion();
    produccion1->setName("Adobe Premiere Pro");
    produccion1->setDeveloper("Adobe");
    produccion1->setEdadClas("+7");
    produccion1->setPrecio(14280);
    produccion1->setTipo("Video");

    Produccion* produccion2 = new Produccion();
    produccion2->setName("Twitch Studio");
    produccion2->setDeveloper("Twitch");
    produccion2->setEdadClas("+7");
    produccion2->setPrecio(0);
    produccion2->setTipo("Streaming");

    Produccion* produccion3 = new Produccion();
    produccion3->setName("Ableton Live");
    produccion3->setDeveloper("Ableton AG");
    produccion3->setEdadClas("+7");
    produccion3->setPrecio(359200);
    produccion3->setTipo("Musica");

    Produccion* produccion4 = new Produccion();
    produccion4->setName("Adobe Photoshop");
    produccion4->setDeveloper("Adobe Inc.");
    produccion4->setEdadClas("+7");
    produccion4->setPrecio(14280);
    produccion4->setTipo("Foto");

    // Agregar objetos a la lista lista
    listaSoftwares.push_back(produccion1);
    listaSoftwares.push_back(produccion2);
    listaSoftwares.push_back(produccion3);
    listaSoftwares.push_back(produccion4);

    //Crear objetos de Navegador y agregarlos a la lista de Softwares
    Navegador* navegador1 = new Navegador();
    navegador1->setName("Brave");
    navegador1->setDeveloper("Brave Software");
    navegador1->setEdadClas("+7");
    navegador1->setPrecio(0);

    Navegador* navegador2 = new Navegador();
    navegador2->setName("Opera");
    navegador2->setDeveloper("Opera Software AS");
    navegador2->setEdadClas("+7");
    navegador2->setPrecio(0);

    // Agregar objetos a la lista lista
    listaSoftwares.push_back(navegador1);
    listaSoftwares.push_back(navegador2);


    //Crear objetos de Seguridad y agregarlos a la lista de Softwares
    Seguridad* seguridad1 = new Seguridad();
    seguridad1->setName("Malwarebytes Anti-Ransomware");
    seguridad1->setDeveloper("Malwarebytes Corporation");
    seguridad1->setEdadClas("+18");
    seguridad1->setPrecio(22295);
    seguridad1->setTipo("Ransomware");

    Seguridad* seguridad2 = new Seguridad();
    seguridad2->setName("Malwarebytes");
    seguridad2->setDeveloper("Malwarebytes Corporation");
    seguridad2->setEdadClas("+18");
    seguridad2->setPrecio(22295);
    seguridad2->setTipo("Spyware");

    Seguridad* seguridad3 = new Seguridad();
    seguridad3->setName("Norton Antivirus");
    seguridad3->setDeveloper("NortonLifeLock Inc.");
    seguridad3->setEdadClas("+18");
    seguridad3->setPrecio(30000);
    seguridad3->setTipo("Botnets");

    Seguridad* seguridad4 = new Seguridad();
    seguridad4->setName("Sophos Intercept X");
    seguridad4->setDeveloper("");
    seguridad4->setEdadClas("+18");
    seguridad4->setPrecio(20000);
    seguridad4->setTipo("Rootkits");

    Seguridad* seguridad5 = new Seguridad();
    seguridad5->setName("Cloudflare");
    seguridad5->setDeveloper("Matthew Prince");
    seguridad5->setEdadClas("+18");
    seguridad5->setPrecio(20500);
    seguridad5->setTipo("Gusanos");

    Seguridad* seguridad6 = new Seguridad();
    seguridad6->setName("Nessus");
    seguridad6->setDeveloper("Renaud Deraison");
    seguridad6->setEdadClas("+18");
    seguridad6->setPrecio(6235460);
    seguridad6->setTipo("Troyanos");

    // Agregar objetos a la lista lista
    listaSoftwares.push_back(seguridad1);
    listaSoftwares.push_back(seguridad2);
    listaSoftwares.push_back(seguridad3);
    listaSoftwares.push_back(seguridad4);
    listaSoftwares.push_back(seguridad5);
    listaSoftwares.push_back(seguridad6);

    //Crear objetos de Social y agregarlos a la lista de Softwares
    Social* social1 = new Social();
    social1->setName("Tinder");
    social1->setDeveloper("Tinder Inc.");
    social1->setEdadClas("+18");
    social1->setPrecio(0);

    Social* social2 = new Social();
    social2->setName("Facebook");
    social2->setDeveloper("Mark Zuckerberg");
    social2->setEdadClas("+7");
    social2->setPrecio(0);

    Social* social3 = new Social();
    social3->setName("Instagram");
    social3->setDeveloper("Kevin Systrom");
    social3->setEdadClas("+7");
    social3->setPrecio(0);


    listaSoftwares.push_back(social1);
    listaSoftwares.push_back(social2);
    listaSoftwares.push_back(social3);
}

void agregarAmistadesIniciales(vector<Usuario*>& listUsuarios, vector<Software*>& listSoftwares){
    for (Usuario* usuario : listUsuarios) {
        for(Software* s : listSoftwares) {
            if(s->getName() =="Instagram"){
                usuario->agregarSoftware(s->getName(),usuario->getEdad(),s->getEdadClas());
                s->agregarUsuario(usuario);
            }
        } 
    }
    int numU = listUsuarios.size();
    for(int i = 0; i < numU;i++){
        if(i<numU-2){
            Usuario* u = listUsuarios[i];
            int iAm1 =(i+1);
            int iAm2 =(i+2);
            Usuario* Am1 =listUsuarios[iAm1];
            Usuario* Am2 =listUsuarios[iAm2];
            int numS = listSoftwares.size();
            for(int j=0;j<numS;j++){
                Software* soft = listSoftwares[j];
                Social* social = dynamic_cast<Social*>(soft);
                for(const string& software:u->getLista()){
                    if(software == soft->getName() && social){
                        social->agregarAmistad(u,Am1);
                        social->agregarAmistad(u,Am2);
                    }
                }
            }
        }else{
            Usuario* u2 = listUsuarios[i];
            int iAm1 =(0);
            int iAm2=(1);
            Usuario* Am1 =listUsuarios[iAm1];
            Usuario* Am2 =listUsuarios[iAm2];
            int numS = listSoftwares.size();
            for(int j=0;j<numS;j++){
                Software* soft = listSoftwares[j];
                Social* social = dynamic_cast<Social*>(soft);
                for(const string& software:u2->getLista()){
                    if(software == soft->getName() && social){
                        social->agregarAmistad(u2,Am1);
                        social->agregarAmistad(u2,Am2);
                    }
                }
            }
        }
        

    }
   
}

//Inicio de sesion
void login(vector<Usuario*>& listUsuarios, vector<Software*>& listSoftware){
    int opcion;
    Usuario* currentU =nullptr;
    vector<string> listU;
    do{
        string user;
        string pass;
        do{
            cout<<"Login"<<endl;
            cout<<"Usuario: "<<endl;
            cin>>user;
            cout<<"Pass: "<<endl;
            cin>>pass;
            for(Usuario* u :listUsuarios){
                if(u->getUsuario() == user && u->getPass() == pass){
                    currentU = u;
                    break;
                }
            }
            listU = currentU->getLista();
            
        }while(currentU == nullptr);
        cout<<"Bienvenido "+user+"."<<endl;
        do{
            cout<<"Seleccionla opcion que desea realizar: "<<endl;
            cout<<"1) Mi biblioteca."<<endl;
            cout<<"2) Mostrar tu email."<<endl;
            cout<<"3)Cerrar sesion."<<endl;
            cin>>opcion;

            switch(opcion){
                case 1:{
                    if(currentU->mostrarSoftware() == false){
                        int op;
                        cout<<"¿Desea agregar un software?"<<endl;
                        cout<<"1) Si."<<endl;
                        cout<<"2) No."<<endl;
                        cin>>op;
                        switch(op){
                            case 1:{
                                cout << "Softwares:" << endl;
                                int opS = 1;
                                vector<string> softwareImpresos; // Registro de los software impresos

                                for (Software* software : listSoftware) {
                                    bool yaImpreso = false;
                                    // Verifica si el nombre del software ya se ha impreso
                                    for (const string& nombre : softwareImpresos) {
                                        if (nombre == software->getName()) {
                                            yaImpreso = true;
                                            break;
                                        }
                                    }

                                    if (!yaImpreso) {
                                        cout << opS << ")" << software->getName() << endl;
                                        opS++;
                                    }
                                }
                                int softwareN;
                                cout<<"Si decea cancelar el agregar un software ingrese el numero 0 "<<endl;
                                cout<<"Ponga la opcion de Software que desea agregar: "<<endl;
                                cin>>softwareN; 
                                while(softwareN!=0){
                                    if (softwareN >= 1 && softwareN <= listSoftware.size()) {
                                        // softwareN es un índice válido en la lista de software
                                        Software* softwareElegido = listSoftware[softwareN - 1];
                                        
                                        // Comprobar el tipo de software
                                        Juego* juego = dynamic_cast<Juego*>(softwareElegido);
                                        Ofimatica* ofimatica = dynamic_cast<Ofimatica*>(softwareElegido);
                                        Produccion* produccion = dynamic_cast<Produccion*>(softwareElegido);
                                        Navegador* navegador = dynamic_cast<Navegador*>(softwareElegido);
                                        Seguridad* seguridad = dynamic_cast<Seguridad*>(softwareElegido);
                                        Social* social = dynamic_cast<Social*>(softwareElegido);

                                        if (juego) {
                                            // El software es de tipo Juego
                                            int opJ;
                                            juego->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == juego->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }
                                            else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opJ;
                                                if(opJ ==1){
                                                    if(currentU->getMoney()>=juego->getPrecio() ){
                                                        currentU->setMoney(currentU->getMoney()-juego->getPrecio());
                                                        currentU->agregarSoftware(juego->getName(),currentU->getEdad(),juego->getEdadClas());
                                                        juego->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opJ ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (ofimatica) {
                                            // El software es de tipo Ofimatica
                                            int opO;
                                            ofimatica->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == ofimatica->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opO;
                                                if(opO ==1){
                                                    if(currentU->getMoney()>=ofimatica->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-ofimatica->getPrecio());
                                                        currentU->agregarSoftware(ofimatica->getName(),currentU->getEdad(),ofimatica->getEdadClas());
                                                        ofimatica->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opO ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (produccion) {
                                            // El software es de tipo Produccion
                                            int opP;
                                            produccion->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == produccion->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opP;
                                                if(opP ==1){
                                                    if(currentU->getMoney()>=produccion->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-produccion->getPrecio());
                                                        currentU->agregarSoftware(produccion->getName(),currentU->getEdad(),produccion->getEdadClas());
                                                        produccion->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opP ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (navegador) {
                                            // El software es de tipo Navegador
                                            int opN;
                                            navegador->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == navegador->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opN;
                                                if(opN ==1){
                                                    if(currentU->getMoney()>=navegador->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-navegador->getPrecio());
                                                        currentU->agregarSoftware(navegador->getName(),currentU->getEdad(),navegador->getEdadClas());
                                                        navegador->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opN ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (seguridad) {
                                            // El software es de tipo Seguridad
                                            if(Admin* admin = dynamic_cast<Admin*>(currentU)){
                                                int opS;
                                                seguridad->getInfo();
                                                bool yaComprado = false;
                                                for(const string& software:currentU->getLista()){
                                                    if(software == seguridad->getName()){
                                                        yaComprado = true;
                                                        break;
                                                    }
                                                }
                                                if(yaComprado){
                                                    cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                                }else{
                                                    cout<<"¿Desea comprarlo?"<<endl;
                                                    cout<<"1) Si."<<endl;
                                                    cout<<"2) No."<<endl;
                                                    cin>>opS;
                                                    if(opS ==1){
                                                        if(currentU->getMoney()>=seguridad->getPrecio()){
                                                            currentU->setMoney(currentU->getMoney()-seguridad->getPrecio());
                                                            currentU->agregarSoftware(seguridad->getName(),currentU->getEdad(),seguridad->getEdadClas());
                                                            seguridad->agregarUsuario(currentU);
                                                            cout<<"Software comprado."<<endl;
                                                        }
                                                        
                                                    }else if(opS ==2){
                                                        cout<<"Se cancelo la compra."<<endl;
                                                    }else{
                                                        cout<<"Opcion no valida"<<endl;
                                                    }
                                                }
                                            }else{
                                                cout<<"No tiene acceso a este software"<<endl;
                                            }                                        
                                        } else if (social) {
                                            // El software es de tipo Social
                                            int opSS;
                                            social->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == seguridad->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opSS;
                                                if(opSS ==1){
                                                    if(currentU->getMoney()>=social->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-social->getPrecio());
                                                        currentU->agregarSoftware(social->getName(),currentU->getEdad(),social->getEdadClas());
                                                        social->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opSS ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        }
                                    } else {
                                        cout << "Opción no válida. Intente nuevamente." << endl;
                                    }

                                    cout << "Ponga la opción de Software que desea agregar o 0 para cancelar: " << endl;
                                    cin >> softwareN;
                                }
                                
                            }case 2:{
                                break;
                            }
                        }
                    }else{
                        int select;
                        cout << "Opciones: " << endl;
                        do {
                            cout << "1) Obtener información de algun software o modificarlo." << endl;
                            cout << "2) Eliminar un Software." << endl;
                            cout << "3) Agregar Software." << endl;
                            cout << "4) Salir de la biblioteca" << endl;
                            cin >> select;

                            switch (select) {
                                case 1: {
                                    int inf;
                                    
                                        currentU->mostrarSoftware();
                                        cout << "Elija el software del que desea obtener información o modificar(ingrese 0 para salir):" << endl;
                                        cin >> inf;

                                        while(inf != 0) {
                                            Software* selectedSoftware;
                                            if (inf >= 1 && inf <= currentU->getSize()) {
                                                int numS = listSoftware.size();
                                                for(int j=0;j<numS;j++){
                                                    Software* soft = listSoftware[j];
                                                    selectedSoftware = soft;
                                                }

                                                Juego* juego = dynamic_cast<Juego*>(selectedSoftware);
                                                Ofimatica* ofimatica = dynamic_cast<Ofimatica*>(selectedSoftware);
                                                Produccion* produccion = dynamic_cast<Produccion*>(selectedSoftware);
                                                Navegador* navegador = dynamic_cast<Navegador*>(selectedSoftware);
                                                Seguridad* seguridad = dynamic_cast<Seguridad*>(selectedSoftware);
                                                Social* social = dynamic_cast<Social*>(selectedSoftware);

                                                if (juego) {
                                                    juego->getInfo();
                                                } else if (ofimatica) {
                                                    int opOf;
                                                    ofimatica->getInfo();
                                                    int cantArch;
                                                    cout<<"¿Desea agregar, eliminar archivos?"<<endl;
                                                    cout<<"1) Agregar."<<endl;
                                                    cout<<"2) Eliminar."<<endl;
                                                    cout<<"3) Ninguno."<<endl;
                                                    cin>>opOf;
                                                    while(opOf!=3){
                                                        if (opOf==1){                                                            
                                                            cout<<"¿Cuantos desea agregar?"<<endl;
                                                            cin>>cantArch;
                                                            ofimatica->setCantArch(ofimatica->getCantArch()+cantArch);
                                                            cout<<"Archivos agregados."<<endl;
                                                        }else if (opOf==2){                                                            
                                                            cout<<"¿Cuantos desea Eliminar?"<<endl;
                                                            cin>>cantArch;
                                                            if(cantArch>=ofimatica->getCantArch()){
                                                                cout<<"La cantidad de archivos que desea eliminar supera a la cantidad de archivos que tiene el software."<<endl;
                                                            }else{
                                                                ofimatica->setCantArch(ofimatica->getCantArch()-cantArch);
                                                                cout<<"Archivos agregados."<<endl;
                                                            }
                                                            
                                                        }
                                                        cout<<"¿Desea agregar, eliminar archivos?"<<endl;
                                                        cout<<"1) Agregar."<<endl;
                                                        cout<<"2) Eliminar."<<endl;
                                                        cout<<"3) Ninguno."<<endl;
                                                        cin>>opOf;
                                                    }
                                                    
                                                } else if (produccion) {
                                                    produccion->getInfo();
                                                    
                                                } else if (navegador) {
                                                    int opN;
                                                    navegador->getInfo();
                                                    navegador->mostrarPaginas();
                                                    cout<<"¿Desea ir a alguna pagina?"<<endl;
                                                    cout<<"1) Si."<<endl;
                                                    cout<<"2) No."<<endl;
                                                    cin>>opN;
                                                    while(opN!=2){
                                                        string pag;
                                                        cout<<"Ingrese la pagina que desea visitar: "<<endl;
                                                        cin>>pag;
                                                        navegador->agregarPagina(pag);
                                                        cout<<"Pagina visitada"<<endl;
                                                    }
                                                } else if (seguridad) {
                                                    seguridad->getInfo();
                                                } else if (social) {
                                                    social->getInfo();
                                                    int opSc;
                                                    cout<<"¿Desea agregar, eliminar amistad o mstrar amistades?"<<endl;
                                                    cout<<"1) Agregar."<<endl;
                                                    cout<<"2) Eliminar."<<endl;
                                                    cout<<"3) Ninguno."<<endl;
                                                    cin>>opSc;
                                                    while(opSc!=3){
                                                        switch(opSc) {
                                                            case 1:{
                                                                string nameU;
                                                                Usuario * add;
                                                                cout<<"Ingrese el nombre del usuario que desea agragar como amistad: "<<endl;
                                                                cin>>nameU;
                                                                bool found = false;
                                                                for (Usuario* usuario : listUsuarios) {
                                                                    if (usuario->getUsuario() == nameU) {
                                                                        found = true;
                                                                        add = usuario;
                                                                        break;
                                                                    }
                                                                }
                                                                if (found) {
                                                                    social->agregarAmistad(currentU,add);                                           
                                                                } else {
                                                                    cout << "Usuario no encontrado: " << nameU << endl;
                                                                }
                                                            }case 2:{
                                                                string nameU;
                                                                cout<<"Ingrese el nombre del usuario que desea eliminar como amistad: "<<endl;
                                                                cin>>nameU;
                                                                social->eliminarAmistad(nameU);                                            
                                                                
                                                            }case 3:{
                                                                break;
                                                            }
                                                        }
                                                        
                                                        
                                                        // Preguntar si desea agregar otra amistad
                                                        cout << "¿Desea agregar o eliminar otra amistad?" << endl;
                                                        cout << "1) Si." << endl;
                                                        cout << "2) No." << endl;
                                                        cin >> opSc;

                                                    }
                                                } 
                                            } else {
                                                cout << "Opción inválida. Seleccione un número válido." << endl;
                                            }
                                            currentU->mostrarSoftware();
                                            cout << "Elija el software del que desea obtener información o modificar(ingrese 0 para salir):" << endl;
                                            cin >> inf;
                                        }
                                    
                                }
                                case 2:{
                                    int inf;
                                    currentU->mostrarSoftware();
                                    cout << "Elija el software que desea eliminar(ingrese 0 para salir):" << endl;
                                    cin >> inf;
                                    while(inf != 0) {
                                        if (inf >= 1 && inf <= currentU->getSize()) {
                                            string softwareAEliminar = currentU->getLista()[inf - 1];                                            
                                            for(Software* softwareSelect : listSoftware){
                                                if(softwareSelect->getName()==softwareAEliminar){
                                                    softwareSelect->eliminarUsuario(currentU->getUsuario());
                                                    currentU->eliminarSoftware(softwareAEliminar);
                                                    cout<<"Softwarer eliminado de la biblioteca"<<endl;
                                                }
                                            }
                                        }else {
                                            cout << "Opción inválida. Seleccione un número válido." << endl;
                                        }
                                        currentU->mostrarSoftware();
                                        cout << "Elija el software que desea eliminar(ingrese 0 para salir):" << endl;
                                        cin >> inf;
                                    }
                                }
                                case 3:{
                                    cout << "Softwares:" << endl;
                                int opS = 1;
                                vector<string> softwareImpresos; // Registro de los software impresos

                                for (Software* software : listSoftware) {
                                    bool yaImpreso = false;
                                    // Verifica si el nombre del software ya se ha impreso
                                    for (const string& nombre : softwareImpresos) {
                                        if (nombre == software->getName()) {
                                            yaImpreso = true;
                                            break;
                                        }
                                    }

                                    if (!yaImpreso) {
                                        cout << opS << ")" << software->getName() << endl;
                                        opS++;
                                    }
                                }
                                int softwareN;
                                cout<<"Si decea cancelar el agregar un software ingrese el numero 0 "<<endl;
                                cout<<"Ponga la opcion de Software que desea agregar: "<<endl;
                                cin>>softwareN; 
                                while(softwareN!=0){
                                    if (softwareN >= 1 && softwareN <= listSoftware.size()) {
                                        Software* softwareElegido = listSoftware[softwareN - 1];
                                        
                                        // Comprobar el tipo de software
                                        Juego* juego = dynamic_cast<Juego*>(softwareElegido);
                                        Ofimatica* ofimatica = dynamic_cast<Ofimatica*>(softwareElegido);
                                        Produccion* produccion = dynamic_cast<Produccion*>(softwareElegido);
                                        Navegador* navegador = dynamic_cast<Navegador*>(softwareElegido);
                                        Seguridad* seguridad = dynamic_cast<Seguridad*>(softwareElegido);
                                        Social* social = dynamic_cast<Social*>(softwareElegido);

                                        if (juego) {
                                            // El software es de tipo Juego
                                            int opJ;
                                            juego->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == juego->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }
                                            else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opJ;
                                                if(opJ ==1){
                                                    if(currentU->getMoney()>=juego->getPrecio() ){
                                                        currentU->setMoney(currentU->getMoney()-juego->getPrecio());
                                                        currentU->agregarSoftware(juego->getName(),currentU->getEdad(),juego->getEdadClas());
                                                        juego->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opJ ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (ofimatica) {
                                            // El software es de tipo Ofimatica
                                            int opO;
                                            ofimatica->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == ofimatica->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opO;
                                                if(opO ==1){
                                                    if(currentU->getMoney()>=ofimatica->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-ofimatica->getPrecio());
                                                        currentU->agregarSoftware(ofimatica->getName(),currentU->getEdad(),ofimatica->getEdadClas());
                                                        ofimatica->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opO ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (produccion) {
                                            // El software es de tipo Produccion
                                            int opP;
                                            produccion->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == produccion->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opP;
                                                if(opP ==1){
                                                    if(currentU->getMoney()>=produccion->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-produccion->getPrecio());
                                                        currentU->agregarSoftware(produccion->getName(),currentU->getEdad(),produccion->getEdadClas());
                                                        produccion->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opP ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (navegador) {
                                            // El software es de tipo Navegador
                                            int opN;
                                            navegador->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == navegador->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opN;
                                                if(opN ==1){
                                                    if(currentU->getMoney()>=navegador->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-navegador->getPrecio());
                                                        currentU->agregarSoftware(navegador->getName(),currentU->getEdad(),navegador->getEdadClas());
                                                        navegador->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opN ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        } else if (seguridad) {
                                           if(Admin* admin = dynamic_cast<Admin*>(currentU)){
                                                int opS;
                                                seguridad->getInfo();
                                                bool yaComprado = false;
                                                for(const string& software:currentU->getLista()){
                                                    if(software == seguridad->getName()){
                                                        yaComprado = true;
                                                        break;
                                                    }
                                                }
                                                if(yaComprado){
                                                    cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                                }else{
                                                    cout<<"¿Desea comprarlo?"<<endl;
                                                    cout<<"1) Si."<<endl;
                                                    cout<<"2) No."<<endl;
                                                    cin>>opS;
                                                    if(opS ==1){
                                                        if(currentU->getMoney()>=seguridad->getPrecio()){
                                                            currentU->setMoney(currentU->getMoney()-seguridad->getPrecio());
                                                            currentU->agregarSoftware(seguridad->getName(),currentU->getEdad(),seguridad->getEdadClas());
                                                            seguridad->agregarUsuario(currentU);
                                                            cout<<"Software comprado."<<endl;
                                                        }
                                                        
                                                    }else if(opS ==2){
                                                        cout<<"Se cancelo la compra."<<endl;
                                                    }else{
                                                        cout<<"Opcion no valida"<<endl;
                                                    }
                                                }
                                            }else{
                                                cout<<"No tiene acceso a este software"<<endl;
                                            }
                                            
                                        } else if (social) {
                                            // El software es de tipo Social
                                            int opSS;
                                            social->getInfo();
                                            bool yaComprado = false;
                                            for(const string& software:currentU->getLista()){
                                                if(software == seguridad->getName()){
                                                    yaComprado = true;
                                                    break;
                                                }
                                            }
                                            if(yaComprado){
                                                cout << "Ya tienes este juego en tu biblioteca. No puedes comprarlo de nuevo." << endl;
                                            }else{
                                                cout<<"¿Desea comprarlo?"<<endl;
                                                cout<<"1) Si."<<endl;
                                                cout<<"2) No."<<endl;
                                                cin>>opSS;
                                                if(opSS ==1){
                                                    if(currentU->getMoney()>=social->getPrecio()){
                                                        currentU->setMoney(currentU->getMoney()-social->getPrecio());
                                                        currentU->agregarSoftware(social->getName(),currentU->getEdad(),social->getEdadClas());
                                                        social->agregarUsuario(currentU);
                                                        cout<<"Software comprado."<<endl;
                                                    }
                                                    
                                                }else if(opSS ==2){
                                                    cout<<"Se cancelo la compra."<<endl;
                                                }else{
                                                    cout<<"Opcion no valida"<<endl;
                                                }
                                            }
                                            
                                        }
                                    } else {
                                        cout << "Opción no válida. Intente nuevamente." << endl;
                                    }

                                    cout << "Ponga la opción de Software que desea agregar o 0 para cancelar: " << endl;
                                    cin >> softwareN;
                                }
                                }
                                
                            }
                        } while (select != 4);
                        
                    }
                    

                }case 2:{
                   cout<<"Corre: "<<currentU->getCorreo()<<endl;
                }
            }
    


        }while(opcion!=3);



        cout<<"Desea cerrar el sistema?"<<endl;
        cout<<"1) Iniciar sesion en otra cuenta."<<endl;
        cout<<"2) Cerrar sistema"<<endl;
        cout<<"Seleccione la opcion: ";
        cin>>opcion;
    }while(opcion !=2);    
    //Se libera la memoria en los vectores
    listUsuarios.clear();
    listSoftware.clear();

}

int main(){
    vector<Usuario*> lUsuarios;
    vector<Software*> lSoftwares;
    cargarDatosUsuarios(lUsuarios);  
    cargarDatosSoftware(lSoftwares);
    login(lUsuarios,lSoftwares);
    return 0;
}

