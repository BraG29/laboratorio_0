#include "Header.h"

Partida::Partida(){

}

Partida::Partida(DtFechaHora _fecha, float _duracion){
    ???
    this->duracion = _duracion;
}

float Partida::getDuracion(){
    return this->duracion;
}

void Partida::setDuracion(float duracion){
    this->tiempo = duracion;
}

Partida::~Partida(){
    cout << "Chau partida" << endl;
}