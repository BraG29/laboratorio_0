#include "VideoJuego.h"

Videojuego::Videojuego() {
	this->inicializarPartidas();
}

Videojuego::~Videojuego() {
}

Videojuego::Videojuego(string _nombre, TipoJuego _genero){
	nombre = _nombre;
	genero = _genero;
	this->inicializarPartidas();
}

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

void Videojuego::setVideojuego(string _nombre, TipoJuego _genero) {
	nombre = _nombre;
	genero = _genero;
}

void Videojuego::setGenero(TipoJuego _genero){
	this->genero = _genero;
}

string Videojuego::getNombre() const{
	return this->nombre;
}

TipoJuego Videojuego::getGenero() const {
	return this->genero;
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

void Videojuego::setNombre(string _nombre) {
	this->nombre = _nombre;
}

// bool Videojuego::existVideojuego(string nombre){
//     std::list<Partida*>::iterator it;
//     if( juegos == NULL) {
//         return false;
//     }
//     for(it = juegos->begin(); it!=juegos->end(); it++){
//         if((*it)->getVideojuego()->getNombre() == nombre){
//             return true;
//         }
//     }
//     return false;
// }

// void Videojuego::SetJuegos(Partida *juego) {
//     if(juegos == NULL){
//         juegos = new list<Partida*>;
//     }
//     this->juegos->push_front(juego);
//     cout << juegos->size() <<endl;
// }

// list<Partida*> *Videojuego::GetJuegos() const {
//     return juegos;
// }

// list<Partida*> *Videojuego::GetJuegos() const {
//     return juegos;
// }
