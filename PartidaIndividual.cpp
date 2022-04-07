#include "PartidaIndividual.h"


PartidaIndividual::PartidaIndividual(){}

PartidaIndividual::PartidaIndividual(bool continuarPartida){
    this->setContinuarPartida(continuarPartida);
}

PartidaIndividual::~PartidaIndividual(){}

void PartidaIndividual::setContinuarPartida(bool continuarPartida){
    this->continuaPartidaAnterior = continuarPartida;
}

bool PartidaIndividual::getContinuarParitda() { return this->continuaPartidaAnterior;}

float PartidaIndividual::darTotalHorasParticipantes(){
    //aca va codigo que todavia no puedo hacer jeje 
}

DtPartida* PartidaIndividual::getDatosPartida(){
    DtPartida* dtI = new DtPartidaIndividual(fecha, duracion, continuaPartidaAnterior);
    return dtI;
}