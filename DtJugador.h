#ifndef DTJUGADOR_H
#define DTJUGADOR_H
#include "Header.h"

class DtJugador {

public:
    //constructores
    DtJugador();
    DtJugador(string nickname, int edad);
    //destructor
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

};


#endif