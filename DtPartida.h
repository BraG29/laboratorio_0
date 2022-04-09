#ifndef DTPARTIDA_H
#define DTPARTIDA_H
#include "Header.h"
#include "DtFechaHora.h"
//#include "time.h"

class DtPartida{

    protected:
        DtFechaHora fecha;
        float duracion;
        bool existe;
    public:
        //construcotres
        DtPartida();
        DtPartida(DtFechaHora fecha, float duracion);
        //getters
        float getDuracion();
        DtFechaHora getFecha() const;
        bool getExiste();
        //setters
        void setDuracion(float);
        void setFecha(DtFechaHora fecha);
        void setExiste(bool existe);
        //destructor
        ~DtPartida();

};



#endif
