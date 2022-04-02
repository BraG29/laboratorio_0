#ifndef PARTIDA_H
#define PARTIDA_H
#include "Header.h"
#include "DtFechaHora.h"
class Partida{

protected:
    DtFechaHora fecha;
    float duracion;
    
public:
    //constructores
    Partida();
    Partida(DtFechaHora fecha,  float duracion);
    //getters
    float getDuracion();
    DtFechaHora getFecha() const;
    //setters
    void setDuracion(float);
    void SetFecha(DtFechaHora fecha);
    //destructor
    ~Partida();
    //operacion.
    float darTotalHorasParticipantes();

};

#endif
