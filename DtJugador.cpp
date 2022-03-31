#include "Header.h"

DtJugador::DtJugador(){

}

DtJugador::DtJugador(string nick, int edad_jugador){
    this->nickname = nick;
    this->edad = edad_jugador;
}


DtJugador::~DtJugador(){
    cout << "DtJugador eliminado";
}

//rican't

string DtJugador::getNickname() const{
    return this->nickname;
}

int DtJugador::getEdad() const{
    return this->edad;
}

void DtJugador::setEdad(int edad_jugador){
    this->edad = edad_jugador;
}

void DtJugador::setNickname(string nickname_jugador){
    this->nickname = nickname;
}