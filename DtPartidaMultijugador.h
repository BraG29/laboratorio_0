#ifndef DTPARTIDAMULTIJUGADOR_H
#define DTPARTIDAMULTIJUGDARO_H
#include "Header.h"

class DtPartidaMultijugador : public Partida{

private:
bool transmitidaEnVivo;
std::string nicknameJugadoresUnidos[0]; //en lugar del 0 hay un *
int cantidadJugadoresUnidos;

};


#endif