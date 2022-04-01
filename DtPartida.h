#ifndef DTPARTIDA_H
#define DTPARTIDA_H
#include "Header.h"

class DtPartida{

    private:
        DtFechaHora fecha;
        float duracion;
    public:
        DtPartida();
        DtPartida(DtFechaHora fecha, float duracion);
        float getDuracion();
        void setDuracion(float);
        ~DtPartida();
};




#endif