#include "DtFechaHora.h"

DtFechaHora::DtFechaHora(){

} 

DtFechaHora::DtFechaHora(int anio_partida, int mes_partida, int dia_partida, int hora_partida, int minuto_partida){
    this->anio = anio_partida;
    this->mes = mes_partida;
    this->dia = dia_partida;
    this->hora = hora_partida;
    this->minuto = hora_partida;
}

DtFechaHora::~DtFechaHora(){
    cout << "Fecha eliminada";
}

int DtFechaHora::GetAnio() const{
    return this->anio;
}

int DtFechaHora::GetMes() const{
    return this->mes;
}

int DtFechaHora::GetDia() const{
    return this->dia;
}

int DtFechaHora::GetHora() const{
    return this->hora;
}

int DtFechaHora::GetMinuto()const{
    this->minuto;
}

void DtFechaHora::SetAnio(int anio_partida){
    this->anio = anio_partida;
}

void DtFechaHora::SetMes(int mes_partida){
    this->mes = mes_partida;
}

void DtFechaHora::SetDia(int dia_partida){
    this->dia = dia_partida;
}

void DtFechaHora::SetHora(int hora_partida){
    this->hora = hora_partida;
}

void DtFechaHora::SetMinuto(int minuto_partida){
    this->minuto = minuto_partida;
}


