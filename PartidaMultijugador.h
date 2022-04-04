#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"
#include "Partida.h"
#include "DtFechaHora.h"
class PartidaMultijugador : public Partida{
    public:
    //ConstrUwUctores
        PartidaMultijugador();
        PartidaMultijugador(Partida * p1);
        PartidaMultijugador(const PartidaMultijugador &mp1);

    //DestrUwUctor
        ~PartidaMultijugador();

    //MetOwOs
        float darTotalHorasParticipantes();
        void agregarGuest(Jugador*);


        //getters
        bool getTransmision();
        DtFechaHora getFechaHora();
        Jugador ** getJugadoresUnidos();

        //setters
        void setTransmision(bool vivo);
        void setFechaHora(DtFechaHora hora);
        void setDuracion(float duracionPartida);

    private:
        bool transmitidaEnVivo;
        Jugador * jugadoresUnidos[MAX_JUGADORES];
};

 #endif