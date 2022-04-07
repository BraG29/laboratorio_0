#include "DtPartida.h"


DtPartida::DtPartida(){

}

DtPartida::DtPartida(DtFechaHora _fecha, float _duracion){
    this->fecha = _fecha;
    float _duracion= rand() +0 % 51; //numero aleatorio entre 1 y  50
    this->duracion = _duracion;
}

float DtPartida::getDuracion(){
    return this->duracion;
}

DtFechaHora DtPartida::getFecha() const{
    return this->fecha;
}

void DtPartida::setFecha(DtFechaHora _fecha){
    this->fecha = _fecha;
}

void DtPartida::setDuracion(float tiempo){
    this->duracion = tiempo;
}

DtPartida::~DtPartida(){
    cout << "Chau DtPartida" << endl;
}