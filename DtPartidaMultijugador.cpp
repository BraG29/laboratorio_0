#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(){
    this->fecha = fecha;
    this->duracion = duracion;
    this->transmitidaEnVivo = transmitidaEnVivo;
    this->nicknameJugadoresUnidos[MAX_JUGADORES] = nicknameJugadoresUnidos[MAX_JUGADORES];
    this->cantidadJugadoresUnidos = cantidadJugadoresUnidos;
};

DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora fechahora, float duracionPartida){
    this->fecha = fechahora;
    this->duracion = duracionPartida;
    //el resto ni idea
}

DtPartidaMultijugador::DtPartidaMultijugador(const DtPartida &p1){
    //Acá tiro los getters de DtPartida para usarlos con los setters EN TEORIA.
    //Pero primero, al momento de escribir esto, DtPartida no tiene getters,
    //Y segundo, el Nico dijo que los Datatypes no tienen Setters, entonces ni idea pa.
}

DtPartidaMultijugador::DtPartidaMultijugador(const DtPartidaMultijugador &pm1){
    this->fecha = pm1.fecha;
    this->duracion = pm1.duracion;
    this->transmitidaEnVivo = pm1.transmitidaEnVivo;
    this->nicknameJugadoresUnidos[MAX_JUGADORES] = pm1.nicknameJugadoresUnidos[MAX_JUGADORES];
    this->cantidadJugadoresUnidos = pm1.cantidadJugadoresUnidos;
}

DtFechaHora DtPartidaMultijugador::getFechaHoraDtPartidaMultijugador(){
    return this->fecha;
}

bool DtPartidaMultijugador::getTransmisionEnVivo(){
    return this->transmitidaEnVivo;
}

//No estoy seguro que esté del todo correcto, todo lo relacionado a nicknameJugadoresUnidos, la verdad :7
string DtPartidaMultijugador::getNicknamesJugadores(){
    return this->nicknameJugadoresUnidos[MAX_JUGADORES];
}

float DtPartidaMultijugador::getDuracionPartida(){
    return this->duracion;
}

int DtPartidaMultijugador::getCantidadJugadoresUnidos(){
    return this->cantidadJugadoresUnidos;
}