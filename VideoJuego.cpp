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
Videojuego::Videojuego(string _nombre, TipoJuego _genero){
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
void Videojuego::setVideojuego(string _nombre, TipoJuego _genero) {
	nombre = _nombre;
	genero = _genero;
}
/**
 * 
 * @param genero
 */
void Videojuego::setGenero(TipoJuego _genero){
	this->genero = _genero;
}

string Videojuego::getNombre() const{
	return this->nombre;
}
/**
 * 
 * @return
 */
TipoJuego Videojuego::getGenero() const {
	return genero;
}

DtVideojuego* Videojuego::getVideojuego(){
	DtVideojuego *dt = new DtVideojuego(nombre, genero);
	return dt;
}

int Videojuego::agregarPartida(Partida * partida){
	int i;
	for( i=0; i < MAX_PARTIDAS; i++){
		if( this->partidas[i] == NULL){
			this->partidas[i] = partida;
			break;
		}
	}
	if( i >= MAX_PARTIDAS){
		//aca va una excepcion:
		cout << "Maximo de partidas alcanzado" <<endl;
		return NULL;
	}
	else{
		cout << "Partida iniciada correctamente" <<endl;
		return i;
	}
}

Partida ** Videojuego::getPartidas(){
	return this->partidas;
}

/**
 * 
 * @param nombre
 */
void Videojuego::setNombre(string _nombre) {
	this->nombre = _nombre;
}
/**
 * 
 * @return
 */
