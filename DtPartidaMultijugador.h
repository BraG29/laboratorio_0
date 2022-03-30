#ifndef DTPARTIDAMULTIJUGADOR_H
#define DTPARTIDAMULTIJUGADOR_H
#include "Header.h"

class DtPartidaMultijugador : public Partida{

public:
    

private:

    bool transmitidaEnVivo;
    std::string nicknameJugadoresUnidos[10]; //en lugar del MAX_JUGADORES, puse 10
    int cantidadJugadoresUnidos;

};


#endif