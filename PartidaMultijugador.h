#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"

class PartidaMultijugador : public Partida{
    public:
    //ConstrUwUctores
        PartidaMultijugador();
        PartidaMultijugador(Partida p1);

    //DestrUwUctor
        ~PartidaMultijugador();

    //MetOwOs
        float darTotalHorasParticipantes();
        DtFechaHora getFechaHora();
        bool getTransmicion();
        void setTransmicion(bool vivo);
        void setFechaHora(DtFechaHora hora);

    private:
        bool transmitidaEnVivo;
};

 #endif