#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H
#include "Header.h"
#include "Partida.h"
#include "DtPartidaIndividual.h"

class PartidaIndividual: public Partida{

    private:

        bool continuaPartidaAnterior;

    public:

        //constructores:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora, float, bool);
        PartidaIndividual(DtPartidaIndividual*, string);
        //destructor:
        ~PartidaIndividual();

        //getter:
        bool getContinuarPartida();

        //setter:
        void setContinuarPartida(bool);
        //operaciones
        float darTotalHorasParticipantes();

        DtPartida * getDatosPartida();
        

};

#endif
