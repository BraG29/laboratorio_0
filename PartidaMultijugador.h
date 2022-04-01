#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"

class PartidaMultijugador : public Partida{
    public:
    //ConstrUwUctores
        PartidaMultijugador();
        PartidaMultijugador(Partida p1);
        PartidaMultijugador(const PartidaMultijugador &mp1);

    //DestrUwUctor
        ~PartidaMultijugador();

    //MetOwOs
        float darTotalHorasParticipantes();


        //getters
        bool getTransmision();
        DtFechaHora getFechaHora();

        //setters
        void setTransmision(bool vivo);
        void setFechaHora(DtFechaHora hora);
        void setDuracion(float duracionPartida);

    private:
        bool transmitidaEnVivo;
};

 #endif