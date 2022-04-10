#include "DtPartidaIndividual.h"

//constructores:
DtPartidaIndividual::DtPartidaIndividual(){
    continuarPartidaAnterior=NULL;
}


DtPartidaIndividual::DtPartidaIndividual(DtFechaHora _fecha, float _duracion, bool continuarPartida){
    setContinuarPartida(continuarPartida);
    setDuracion(_duracion);
    setFecha(_fecha);
}

//destructor:
DtPartidaIndividual::~DtPartidaIndividual(){}

//getter:
bool DtPartidaIndividual::getContinuarPartida(){
    return this->continuarPartidaAnterior;
}

//setter:
void DtPartidaIndividual::setContinuarPartida(bool continuarPartida){
    this->continuarPartidaAnterior = continuarPartida;
}
