#ifndef PARTIDA_H
#define PARTIDA_H
#include "Header.h"
#include "DtFechaHora.h"
class Partida{

protected:
    DtFechaHora fecha;
    float duracion;
    int idPartida;
    
public:
    //constructores
    Partida();
    Partida(DtFechaHora fecha,  float duracion);
    //getters
    float getDuracion();
    DtFechaHora getFecha() const;
    int getId();
    //setters
    void setDuracion(float);
    void SetFecha(DtFechaHora fecha);
    void setId(int);
    //destructor
    ~Partida();
    //operacion.
    virtual float darTotalHorasParticipantes() = 0;

};

#endif
