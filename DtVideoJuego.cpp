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
	titulo = _titulo;
	genero = _genero;
	totalHorasDeJuego = _totalHorasDeJuego;
}

DtVideojuego::DtVideojuego(const DtVideojuego& orig){
}

DtVideojuego::~DtVideojeugo(){
}
/**
 * 
 * @param genero
 */
void DtVideojuego::SetGenero(Videojuego::Tipojuego genero){
	this->genero = genero;
}
/**
 * 
 * @return
 */
Videojuego::Tipojuego DtVideojuego::GetGenero() const {
	return genero;
}
/**
 * 
 * @param titulo
 */
void DtVideojuego::SetTitulo() const {
	this->titulo = titulo;
}
/**
 * 
 * @return
 */
string DtVideojuego::GetTitlulo() const {
	return titulo;
}
/**
 * 
 * @param totalHorasDeJuego
 */
void DtVideojuego::SetTotalHorasDeJuego() const {
	this->totalHorasDeJuego = totalHorasDeJuego;
}
/**
 * 
 * @return
 */
float DtVideojuego::GetTotalHorasDeJuego() const{
	return totalHorasDeJuego;
}
