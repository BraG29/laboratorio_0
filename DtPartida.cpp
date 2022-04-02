#include "DtPartida.h"


DtPartida::DtPartida(){

}

DtPartida::DtPartida(DtFechaHora _fecha, float _duracion){
    this->fecha = _fecha;
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