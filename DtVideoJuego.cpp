#include "DtVideoJuego.h"


DtVideojuego::DtVideojuego(){
	this->inicializarDtPartida();
}
/**
 * 
 * @param _titulo
 * @param _genero
 * @param _totalhorasDeJuego
 */
DtVideojuego::DtVideojuego(string _titulo, TipoJuego _genero, float _totalhorasDeJuego){
	this->nombre = _titulo;
	this->genero = _genero;
	this->totalHorasDeJuego = _totalhorasDeJuego;
	this->inicializarDtPartida();
}

DtVideojuego::DtVideojuego(string _titulo, TipoJuego _genero){
	this->nombre = _titulo;
	this->genero = _genero;
	this->inicializarDtPartida();
//	this->totalHorasDeJuego = totalHorasDeJuego;
}


DtVideojuego::DtVideojuego(const DtVideojuego& orig){
	this->inicializarDtPartida();
}

DtVideojuego::~DtVideojuego(){
}
/**
 * 
 * @param genero
 */
void DtVideojuego::setGenero(TipoJuego genero){
	this->genero = genero;
}
/**
 * 
 * @return
 */
TipoJuego DtVideojuego::getGenero() const {
	return this->genero;
}
/**
 * 
 * @param titulo
 */
void DtVideojuego::setNombre(string titulo) {
	//this->nombre = titulo; hay que reemplazar un string con otro y la verdad que ni idea
}
/**
 * 
 * @return
 */
string DtVideojuego::getNombre() const {
	return this->nombre;
}
/**
 * 
 * @param totalHorasDeJuego
 */
void DtVideojuego::setTotalHorasDeJuego( float f1) {
	this->totalHorasDeJuego = f1;
}
/**
 * 
 * @return
 */


float DtVideojuego::getTotalHorasDeJuego() const{
	return this->totalHorasDeJuego;
}

Partida** DtVideojuego::getDtPartidas() {
	return this->dtPartidas;
}