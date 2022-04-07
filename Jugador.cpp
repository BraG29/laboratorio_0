#include "Jugador.h"

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

string Jugador::GetNickname() {
    return this->nickname;
}

int Jugador::GetEdad() const{
    return this->edad;
}
/*
DtJugador *  Jugador::getJugador(){
    DtJugador * jugador = new DtJugador(nickname, edad);
    return jugador;
}*/
 DtJugador * Jugador::getJugador(){
    DtJugador * jugador = new DtJugador(nickname, edad);
    return jugador;
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

void Jugador::SetJuegos(Partida *juego) {
    if(juegos == NULL){
        juegos = new list<Partida*>;
    }
    this->juegos->push_front(juego);
    cout << juegos->size() <<endl;
}

list<Partida*> *Jugador::GetJuegos() const {
    return juegos;
}

*/
