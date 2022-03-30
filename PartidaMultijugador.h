#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"

class PartidaMultijugador : public Partida{
    public:
    //Constructores
        PartidaMultijugador();
        PartidaMultijugador(Partida p1);

    //Destructor

    //MetOwOs
        float darTotalHorasParticipantes();
        DtFechaHora getFechaHora();
        void setFechaHora(DtFechaHora hora);

    private:
        bool transmitidaEnVivo;
};

 #endif