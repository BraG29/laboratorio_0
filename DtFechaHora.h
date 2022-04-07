#ifndef DTFECHAHORA_H
#define DTFECHAHORA_H
#include "Header.h"

class DtFechaHora{

    public:
        //constructores.
        DtFechaHora();
        DtFechaHora(int dia, int mes, int anio, int hora, int  minuto);
        //destructor.
        virtual~DtFechaHora();
        //setters
        void SetDia(int dia);
        void SetMes(int mes);
        void SetAnio(int anio);
        void SetHora(int hora);
        void SetMinuto(int minuto);
        //getters
        int GetDia() const;
        int GetMes() const;
        int GetAnio() const;
        int GetHora() const;
        int GetMinuto()const;


    private:
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;

};

#endif