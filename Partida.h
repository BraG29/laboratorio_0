#ifndef PARTIDA_H
#define PARTIDA_H
#include "Header.h"
#include "DtFechaHora.h"
#include "Jugador.h"
#include "DtPartida.h"
class Partida{

    protected:
        DtFechaHora fecha;
        float duracion;
        Jugador * jugadorInicial;
        //modificacion
    public:
        //constructores
        Partida();
        Partida(DtFechaHora fecha,  float duracion,);
        //getters
        float getDuracion();
        DtFechaHora getFecha() const;
        Jugador * getJugadorInicial();
        //setters
        void setDuracion(float);
        void SetFecha(DtFechaHora fecha);
        void setJugadorInicial(Jugador*);
        //destructor
        ~Partida();
        //operacion.
        virtual float darTotalHorasParticipantes() = 0;
        virtual DtPartida * getDatosPartida() = 0;

};

#endif
