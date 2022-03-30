#ifndef DTPARTIDAMULTIJUGADOR_H
#define DTPARTIDAMULTIJUGADOR_H
#include "Header.h"

class DtPartidaMultijugador : public Partida{

private:
bool transmitidaEnVivo;
std::string nicknameJugadoresUnidos[3]; //en lugar del 0 hay un *
int cantidadJugadoresUnidos;

};


#endif