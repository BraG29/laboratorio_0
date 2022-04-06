#include "Header.h"
#include "DtPartidaIndividual.h"

//constructores:
DtPartidaIndividual::DtPartidaIndividual(){
    continuarPartidaAnterior=NULL;
}

DtPartidaIndividual::DtPartidaIndividual(const DtPartidaIndividual &orig){}

DtPartidaIndividual::DtPartidaIndividual(bool continuarPartida){
    setContinuarPartidaAnterior(continuarPartida);
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
