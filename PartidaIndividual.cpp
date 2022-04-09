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


DtPartida* PartidaIndividual::getDatosPartida(){
    DtPartida* dtI = new DtPartidaIndividual(fecha, duracion, continuaPartidaAnterior);
    return dtI;
}

PartidaIndividual::PartidaIndividual(DtPartidaIndividual& dt) : Partida(dt.getFecha(),dt.getDuracion()){
    continuaPartidaAnterior = dt.getContinuarPartida();
}

float PartidaIndividual::darTotalHorasParticipantes(){
    return this->duracion;
}
