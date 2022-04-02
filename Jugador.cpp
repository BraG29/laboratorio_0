#include "Header.h"

Jugador::Jugador(){
    
}

Jugador::Jugador(string nickname_jugador ,int edad_jugador , string contrasenia_jugador){
    this->edad = edad_jugador;
    this->contrasenia = contrasenia_jugador;
    this->nickname = nickname_jugador;
}

Jugador::~Jugador(){
    cout << "Jugador eliminado.";
}

string Jugador::GetContrasenia() const{
    return this->contrasenia;
}

string Jugador::GetNickname() const{
    return this->nickname;
}

int Jugador::GetEdad() const{
    return this->edad;
}

void Jugador::SetEdad(int edad_jugador){
    this->edad = edad_jugador;
}

void Jugador::SetNickname(string nickname_jugador){
    this->nickname = nickname_jugador;
}

void Jugador::setContrasenia(string contrasenia_jugador){
    this->contrasenia = contrasenia_jugador;
}

//En desarrollo -Jona
/*
bool Jugador::existsVideojuego(string nombre){
    std::list<Partidas *>::iterator it;
    if(juegos == NULL) {
        return false;
    }
    for(it = juegos->begin(); it!=juegos->end(); it++){
        if((*it)->getVideojuego()->getNombre() == nombre){
            return true;
        }
    }
    return false;
}
*/
