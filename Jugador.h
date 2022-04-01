#ifndef JUGADOR_H
#define JUGADOR_H
#include "Header.h"

class Jugador{

public:
    //constructores
    Jugador();
    Jugador(string nickname, int edad, string contrasenia);
    Jugador(const Jugador &j1);//constructor por copia, el ampersand es para decir que te vas a referir a la dirección de memoria a la cual apunta lo que le llega.
    //destructor
    virtual ~Jugador();
    //setters
    void SetNickname(string nickname);
    void SetEdad(int edad);
    void setContrasenia(string contrasenia);
    //getters
    string GetNickname() const;
    int GetEdad() const;
    string GetContrasenia() const;
    

private:
string nickname;
int edad;
string contrasenia;

};


#endif