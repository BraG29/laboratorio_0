#include "PartidaIndividual.h"


PartidaIndividual::PartidaIndividual(){}

// PartidaIndividual::PartidaIndividual(bool continuarPartida){
//     this->setContinuarPartida(continuarPartida);
// }

PartidaIndividual::PartidaIndividual(DtFechaHora _fecha, float _duracion, bool _continuacion){
    fecha = _fecha;
    duracion = _duracion;
    continuaPartidaAnterior = _continuacion;
}


PartidaIndividual::~PartidaIndividual(){}

void PartidaIndividual::setContinuarPartida(bool continuarPartida){
    this->continuaPartidaAnterior = continuarPartida;
}

bool PartidaIndividual::getContinuarPartida() { return this->continuaPartidaAnterior;}


DtPartida* PartidaIndividual::getDatosPartida(){
    DtPartida* dtI = new DtPartidaIndividual(fecha, duracion, continuaPartidaAnterior);
    return dtI;
}

PartidaIndividual::PartidaIndividual(DtPartidaIndividual* dt, string _jugadorInicial){
    this->jugadorInicial->SetNickname(_jugadorInicial);
    this->fecha = dt->getFecha();
    this->duracion = dt->getDuracion();
    continuaPartidaAnterior = dt->getContinuarPartida();
}

float PartidaIndividual::darTotalHorasParticipantes(){
    return this->duracion;
}
