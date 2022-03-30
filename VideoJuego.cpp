#include "VideoJuego.h"

Videojuego::Videojuego() {
}

Videojuego::Videojuego(const Videojuego& orig) {
}

Videojuego::~Videojuego() {
}
/**
 *
 * @param _nombre
 * @param _genero
 */
Videojuego::Videojuego(string _nombre, Tipojuego _genero){
	nombre = _nombre;
	genero = _genero;
}
/**
 *
 *@param dtVideojuego
 */
Videojuego::Videojuego(DtVideojuego& dtVideojuego){
	nombre = dtVideojuego.getNombre();
	genero = dtVideojuego.getGenero();
}

/**
 * 
 * @param _nombre
 * @param _genero
 */
void Videojuego::setVideojuego(string _nombre, Tipojuego _genero) {
	nombre = _nombre;
	genero = _genero;
}
/**
 * 
 * @param genero
 */
Tipojuego Videojuego(Tipojuego genero){
	this->genero = genero;
}
/**
 * 
 * @return
 */
Tipojuego Videojuego::getGenero() const {
	return genero;
}

DtVideojuego* Videojuego::getVideojuego(){
	DtVideojuego *dt = new DtVideojuego(nombre, genero);
	return dt;
}

/**
 * 
 * @param nombre
 */
void Videojuego::setNombre(string nombre){
	this->nombre = nombre;
}
/**
 * 
 * @return
 */
