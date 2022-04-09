#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"
#include "Partida.h"
#include "DtFechaHora.h"
#include "DtPartidaMultijugador.h"

class PartidaMultijugador : public Partida{
    public:
    //ConstrUwUctores
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora, float, bool);
        
    //DestrUwUctor
        ~PartidaMultijugador();

    //MetOwOs
        float darTotalHorasParticipantes();
        void agregarGuest(Jugador*);
        DtPartida* getDatosPartida();
        void inicializarJugadoresUnidos();
        PartidaMultijugador(DtPartidaMultijugador&);

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
