#include "VideoJuego.h"

Videojuego::Videojuego() {
	this->inicializarPartidas();
}

Videojuego::Videojuego(const Videojuego& orig) {
	this->inicializarPartidas();
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
	this->inicializarPartidas();
}
/**
 *
 *@param dtVideojuego
 */
Videojuego::Videojuego(DtVideojuego& dtVideojuego){
	nombre = dtVideojuego.getNombre();
	genero = dtVideojuego.getGenero();
	this->inicializarPartidas();
}

void Videojuego::inicializarPartidas(){
	for( int i=0; i<MAX_PARTIDAS; i++){
		this->partidas[i] = NULL;
	}
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

void Videojuego::agregarPartida(Partida * partida){
	int i;
	for( i=0; i < MAX_PARTIDAS; i++){  //recorro el arreglo.
		if( this->partidas[i] == NULL){ //busco un lugar vacio dentro del arreglo
			this->partidas[i] = partida;//agrego una partida al arreglo
			break;
		}
	}
	if( i >= MAX_PARTIDAS){ //si el arreglo esta lleno lanza el siguiente error:
		//aca va una excepcion:
		cout << "Maximo de partidas alcanzado" <<endl;
	}
	else{
		cout << "Partida iniciada correctamente" <<endl; //si el arreglo tiene lugar la partida se agrega correctamente.
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
