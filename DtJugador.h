#ifndef DTJUGADOR_H
#define DTJUGADOR_H
#include "Header.h"

class DtJugador {

public:
    //constructores
    DtJugador();
    DtJugador(string nickname, int edad);
    //DtJugador(string nickname, int edad, string contrasenia);

    //destructor.
    virtual~DtJugador(); 

    //setters
    void setNickname(string nickname);
    void setEdad(int edad);
    
    //getters
    string getNickname() const;
    int getEdad() const;


private:
string nickname;
int edad;
//int contrasenia;
//en el PDF del lab, dice que DtJugador no tiene contraseña, pero una de las funciones del Jonathan intenta insertarle contraseña a un constructor de esta clase.

};


#endif