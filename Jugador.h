#ifndef JUGADOR_H
#define JUGADOR_H
#include "Header.h"

class Jugador{

public:
    //constructores
    Jugador();
    Jugador(string nickname, int edad, string contrasenia);
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
//En desarrollo -Jona
/*
    bool existsVideojuego(string nombre);
    void SetJuegos(Partida *juego);
    list<Partida*> *GetJuegos() const;

*/
private:
string nickname;
int edad;
string contrasenia;

};


#endif
