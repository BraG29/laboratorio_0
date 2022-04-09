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
        PartidaIndividual(bool);

        //destructor:
        ~PartidaIndividual();

        //getter:
        bool getContinuarParitda();

        //setter:
        void setContinuarPartida(bool);
        //operaciones
        float darTotalHorasParticipantes();

        DtPartida * getDatosPartida();


};

#endif