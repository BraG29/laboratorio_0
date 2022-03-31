#include "Header.h"

DtVideojuego::DtVideojuego(){
}
/**
 * 
 * @param _titulo
 * @param _genero
 * @param _totalhorasDeJuego
 */

DtVideojuego::DtVideojuego(string _titulo, Tipojuego _genero, float _totalhorasDeJuego){
	this->nombre = _titulo;
	genero = _genero;
	totalHorasDeJuego = _totalhorasDeJuego;
}

DtVideojuego::DtVideojuego(const DtVideojuego& orig){
}

DtVideojuego::~DtVideojeugo(){
}
/**
 * 
 * @param genero
 */
void DtVideojuego::setGenero(Tipojuego genero){
	this->genero = genero;
}
/**
 * 
 * @return
 */

Tipojuego DtVideojuego::getGenero() const {
	return genero;
}

/**
 * 
 * @param titulo
 */
void DtVideojuego::setNombre(string _titulo) const {
	this->nombre = _titulo;
}
/**
 * 
 * @return
 */

string DtVideojuego::getNombre() const {
	return nombre;
}
/**
 * 
 * @param totalHorasDeJuego
 */

void DtVideojuego::setTotalHorasDeJuego() {
	this->totalHorasDeJuego = totalHorasDeJuego;
}
/**
 * 
 * @return
 */
float DtVideojuego::getTotalHorasDeJuego() const{
	return totalHorasDeJuego;
}
