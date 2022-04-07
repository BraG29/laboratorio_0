#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"
#include "Partida.h"
#include "DtFechaHora.h"
class PartidaMultijugador : public Partida{
    public:
    //ConstrUwUctores
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora, float, bool);
        PartidaMultijugador(const PartidaMultijugador &mp1);

    //DestrUwUctor
        ~PartidaMultijugador();

    //MetOwOs
        virtual float darTotalHorasParticipantes();
        void agregarGuest(Jugador*);
        DtPartida* getDatosPartida();
        void inicializarJugadoresUnidos();


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
        Jugador ** jugadoresUnidos = new Jugador*[MAX_JUGADORES];
};

 #endif