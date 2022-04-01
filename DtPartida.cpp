#include "Header.h"

DtPartida::DtPartida(){

}

DtPartida::DtPartida(DtFechaHora _fecha, float _duracion){
    ???
    this->duracion = _duracion;
}

float DtPartida::getDuracion(){
    return this->duracion;
}

void DtPartida::setDuracion(float duracion){
    this->tiempo = duracion;
}

DtPartida::~DtPartida(){
    cout << "Chau DtPartida" << endl;
}