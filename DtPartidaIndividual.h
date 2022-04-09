#ifndef DTPARTIDAINDIVIDUAL_H
#define DTPARTIDAINDIVIDUAL_H
#include "Header.h"
#include "DtPartida.h"

class DtPartidaIndividual : public DtPartida{

    private:
        bool continuarPartidaAnterior;

    public:
        //constructores:
        DtPartidaIndividual();
        DtPartidaIndividual(DtFechaHora, float, bool);
        
        //destructor:
        ~DtPartidaIndividual();

        //getter:
        bool getContinuarPartidaAnterior();

        //setter:
        void setContinuarPartidaAnterior(bool);

        DtPartida * getDatosPartida();

};

#endif