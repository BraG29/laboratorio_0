#ifndef PARTIDA_H
#define PARTIDA_H
#include "Header.h"

class Partida{

    protected:
        DtFechaHora fecha;
        float duracion;
    public:
        Partida();
        Partida(DtFechaHora fecha,  float duracion);
        float getDuracion();
        void setDuracion(float);
        float darTotalHorasParticipantes();
        ~DtPartida();
};

#endif
