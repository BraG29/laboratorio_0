#include "DtPartidaMultijugador.h"

DtPartidaMultijugador::DtPartidaMultijugador(){
    inicializarJugadoresUnidos();
};

DtPartidaMultijugador::DtPartidaMultijugador(DtFechaHora fechahora, float duracionPartida, bool _enVivo, Jugador** _jugadoresUnidos){
    cantidadJugadoresUnidos = 0;
    this->fecha = fechahora;
    this->duracion = duracionPartida;
    this->transmitidaEnVivo = _enVivo;
    inicializarJugadoresUnidos();
    this->jugadoresUnidos = _jugadoresUnidos;
    contarJugadores();
}

DtPartidaMultijugador::~DtPartidaMultijugador(){}

DtFechaHora DtPartidaMultijugador::getFechaHoraDtPartidaMultijugador(){
    return this->fecha;
}

bool DtPartidaMultijugador::getTransmisionEnVivo(){
    return this->transmitidaEnVivo;
}

string* DtPartidaMultijugador::getNicknamesJugadores(){
    int i = 0; 
    while( jugadoresUnidos[i] != NULL && i < MAX_JUGADORES){
        nicknameJugadoresUnidos[i] = jugadoresUnidos[i]->GetNickname();
        i++;
    }
    return this->nicknameJugadoresUnidos;
}

float DtPartidaMultijugador::getDuracionPartida(){
    return this->duracion;
}

int DtPartidaMultijugador::getCantidadJugadoresUnidos(){
    return this->cantidadJugadoresUnidos;
}

void DtPartidaMultijugador::contarJugadores(){
    int i = 0;
    while( jugadoresUnidos[i] != NULL){
        cantidadJugadoresUnidos++;
    }
}

void DtPartidaMultijugador::inicializarJugadoresUnidos(){
    for( int i=0; i<MAX_JUGADORES; i++){
        jugadoresUnidos[i] = NULL;
    }
}