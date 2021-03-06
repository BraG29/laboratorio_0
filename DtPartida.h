#ifndef DTPARTIDA_H
#define DTPARTIDA_H
#include "Header.h"

class DtPartida{

    protected:
        DtFechaHora fecha;
        float duracion;
    public:
        //construcotres
        DtPartida();
        DtPartida(DtFechaHora fecha, float duracion);
        //getters
        float getDuracion();
        DtFechaHora getFecha() const;
        //setters
        void setDuracion(float);
        void setFecha(DtFechaHora fecha);
        //destructor
        ~DtPartida();
};




#endif