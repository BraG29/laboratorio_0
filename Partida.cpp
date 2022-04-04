#include "Partida.h"


Partida::Partida(){

}

Partida::Partida(DtFechaHora _fecha, float _duracion){
    this->fecha = _fecha;
    this->duracion = _duracion;
}

DtFechaHora Partida::getFecha() const{
    return this->fecha;
}

float Partida::getDuracion(){
    return this->duracion;
}

int Partida::getId(){
    return this->idPartida;
}


void Partida::SetFecha(DtFechaHora _fecha){
    this->fecha = _fecha;
}

void Partida::setDuracion(float tiempo){
    this->duracion = tiempo;
}

void Partida::setId(int id){
    this->idPartida = id;
}

Partida::~Partida(){
    cout << "Chau partida" << endl;
}