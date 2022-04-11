#ifndef DTPARTIDAMULTIJUGADOR_H
#define DTPARTIDAMULTIJUGADOR_H
#include "Header.h"
#include "DtPartida.h"
#include "Jugador.h"


class DtPartidaMultijugador : public DtPartida{

    public:
        //Constructores
        DtPartidaMultijugador();
        DtPartidaMultijugador(DtFechaHora, float, bool, Jugador**);

        //Destructor
        virtual ~DtPartidaMultijugador();

        //Operaciones

        //Getters
        DtFechaHora getFechaHoraDtPartidaMultijugador();
        bool getTransmisionEnVivo();
        string* getNicknamesJugadores();
        float getDuracionPartida();
        int getCantidadJugadoresUnidos();
        void contarJugadores();

        void inicializarJugadoresUnidos();
        
        //setters
        void setTransmisionEnVivo(bool);
        void setFechaHora(DtFechaHora);
        void setDuracion(float);
        
        Jugador ** getJugadoresUnidos();


    private:

        bool transmitidaEnVivo;
        string nicknameJugadoresUnidos[MAX_JUGADORES];
        int cantidadJugadoresUnidos;
        Jugador ** jugadoresUnidos = new Jugador*[MAX_JUGADORES];
};


#endif