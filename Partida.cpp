#include "Partida.h"


Partida::Partida(){

}

Partida::Partida(DtFechaHora _fecha, float _duracion){
    this->SetFecha(_fecha);
    this->setDuracion(_duracion);
    this->setJugadorInicial(jugadorInicial);
}

DtFechaHora Partida::getFecha() const{
    return this->fecha;
}

float Partida::getDuracion(){
    return this->duracion;
}

bool Partida::getExiste(){
    return this->existe;
}

Videojuego* Partida::getVideojuego(){
    return videojuego;
}

void Partida::setVideojuego(Videojuego *videojuego){
    this->videojuego = videojuego;
}

/*Jugador * Partida::getJugadorInicial(){
    return this->jugadorInicial;
}*/

void Partida::setExiste(bool existe){
    this->existe = existe;
}

void Partida::SetFecha(DtFechaHora _fecha){
    this->fecha = _fecha;
}

void Partida::setDuracion(float tiempo){
    this->duracion = tiempo;
}

void Partida::setJugadorInicial(Jugador* jugadorInicial){
    this->jugadorInicial = jugadorInicial;
}

Partida::~Partida(){
    cout << "Chau partida" << endl;
}
