#ifndef DTPARTIDAMULTIJUGADOR_H
#define DTPARTIDAMULTIJUGADOR_H
#include "Header.h"
#include "DtPartida.h"

class DtPartidaMultijugador : public DtPartida{

public:
    //Constructores
    DtPartidaMultijugador();
    DtPartidaMultijugador(DtFechaHora fechahora, float duracion, bool);
    DtPartidaMultijugador(const DtPartida &p1);
    DtPartidaMultijugador(const DtPartidaMultijugador &pm1);

    //Destructor
    ~DtPartidaMultijugador();

    //Operaciones
    //Getters
    DtFechaHora getFechaHoraDtPartidaMultijugador();
    bool getTransmisionEnVivo();
    string getNicknamesJugadores();
    float getDuracionPartida();
    int getCantidadJugadoresUnidos();

private:

    bool transmitidaEnVivo;
    std::string nicknameJugadoresUnidos[MAX_JUGADORES];
    int cantidadJugadoresUnidos;

};


#endif