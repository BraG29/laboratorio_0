#include "DtPartidaIndividual.h"

//constructores:
DtPartidaIndividual::DtPartidaIndividual(){
    continuarPartidaAnterior=NULL;
}


DtPartidaIndividual::DtPartidaIndividual(DtFechaHora _fecha, float _duracion, bool continuarPartida){
    setContinuarPartidaAnterior(continuarPartida);
    setDuracion(_duracion);
    setFecha(_fecha);
}

//destructor:
DtPartidaIndividual::~DtPartidaIndividual(){}

//getter:
bool DtPartidaIndividual::getContinuarPartidaAnterior(){
    return this->continuarPartidaAnterior;
}

//setter:
void DtPartidaIndividual::setContinuarPartidaAnterior(bool continuarPartida){
    this->continuarPartidaAnterior = continuarPartida;
}
