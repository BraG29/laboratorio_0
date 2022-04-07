#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(){
    inicializarJugadoresUnidos();
};

DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora fechahora, float duracionPartida, bool _enVivo, Jugador** _jugadoresUnidos){
    this->fecha = fechahora;
    this->duracion = duracionPartida;
    this->transmitidaEnVivo = _enVivo;
    this->jugadoresUnidos = _jugadoresUnidos;
    inicializarJugadoresUnidos();
    //el resto ni idea
}

DtPartidaMultijugador::DtPartidaMultijugador(const DtPartidaMultijugador &pm1){
    this->fecha = pm1.fecha;
    this->duracion = pm1.duracion;
    this->transmitidaEnVivo = pm1.transmitidaEnVivo;
    this->nicknameJugadoresUnidos[MAX_JUGADORES] = pm1.nicknameJugadoresUnidos[MAX_JUGADORES];
    this->cantidadJugadoresUnidos = pm1.cantidadJugadoresUnidos;
    inicializarJugadoresUnidos();
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

void DtPartidaMultijugador::inicializarJugadoresUnidos(){
    for( int i=0; i<MAX_JUGADORES; i++){
        jugadoresUnidos[i] = NULL;
    }
}