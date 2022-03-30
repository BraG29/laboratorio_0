#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Header.h"

class PartidaMultijugador : public Partida{
    public:
    //Constructores
        PartidaMultijugador();
        PartidaMultijugador(Partida p1);

    //Destructor
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