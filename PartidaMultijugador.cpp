#include "PartidaMultijugador.h"


PartidaMultijugador::PartidaMultijugador(){
    this->fecha = fecha;
    this->duracion = duracion;
    this->transmitidaEnVivo = transmitidaEnVivo;
}

PartidaMultijugador::PartidaMultijugador(Partida* p1){
    //this->fecha = p1.fecha; No puedo por los permisos? en cualquier caso la gracia seria usar los getters de Partida, pero no existen al momento de escribir esto.
    //this->duracion = p1.duracion; lo mismo
    this->transmitidaEnVivo = transmitidaEnVivo;
}

PartidaMultijugador::PartidaMultijugador(const PartidaMultijugador &mp1){
        this->fecha = mp1.fecha;
    this->duracion = mp1.duracion;
    this->transmitidaEnVivo = mp1.transmitidaEnVivo;
}

void PartidaMultijugador::agregarGuest(Jugador* guest){
	int i;
	for( i=0; i < MAX_JUGADORES; i++){  
		if( this->jugadoresUnidos[i] == NULL){ 
			this->jugadoresUnidos[i] = guest;
			break;
		}
	}
	if( i >= MAX_JUGADORES){ 
		//aca va una excepcion:
		cout << "Partida llena de platitas a ksa" <<endl;
	}
	else{
		cout << "Jugador: " + guest->GetNickname() + 
        " se ha unido a la partida" <<endl; 
	}
    
}

bool PartidaMultijugador::getTransmision(){
    return this->transmitidaEnVivo;
}

DtFechaHora PartidaMultijugador::getFechaHora(){
    return this->fecha;
}

Jugador ** PartidaMultijugador::getJugadoresUnidos(){
    return jugadoresUnidos;
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

DtPartida* PartidaMultijugador::getDatosPartida(){
    DtPartida * dtM = new DtPartidaMultijugador(fecha, duracion, transmitidaEnVivo);
    return dtM;
}

float PartidaMultijugador::darTotalHorasParticipantes(){
    int i = 0;

    while(this->jugadoresUnidos[i] != NULL && i < MAX_JUGADORES){
        i++;
    }

    return this->duracion * i;
}


//main 
