#include "PartidaMultijugador.h"


PartidaMultijugador::PartidaMultijugador(){
    this->fecha = fecha;
    this->duracion = duracion;
    this->transmitidaEnVivo = transmitidaEnVivo;
}

PartidaMultijugador::PartidaMultijugador(Partida p1){
    //this->fecha = p1.fecha; No puedo por los permisos? en cualquier caso la gracia seria usar los getters de Partida, pero no existen al momento de escribir esto.
    //this->duracion = p1.duracion; lo mismo
    this->transmitidaEnVivo = transmitidaEnVivo;
}

PartidaMultijugador::PartidaMultijugador(const PartidaMultijugador &mp1){
        this->fecha = mp1.fecha;
    this->duracion = mp1.duracion;
    this->transmitidaEnVivo = mp1.transmitidaEnVivo;
}

bool PartidaMultijugador::getTransmision(){
    return this->transmitidaEnVivo;
}

DtFechaHora PartidaMultijugador::getFechaHora(){
    return this->fecha;
}


void PartidaMultijugador::setDuracion(float duracionPartida){
    this->duracion = duracionPartida;
}

void PartidaMultijugador::setFechaHora(DtFechaHora hora){
    this->fecha = hora;
}

void PartidaMultijugador::setTransmision(bool vivo){
    this->transmitidaEnVivo = vivo;
}