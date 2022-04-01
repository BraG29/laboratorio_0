#include "Header.h"

void initialize_array() {
	for (int i = 0; i < MAX_JUGADORES; i++) {
		jugadores[i] = NULL;
    	}
    	for (int i = 0; i < MAX_VIDEOJUEGOS; i++) {
        	videojuegos[i] = NULL;
    	}
	for (int i = 0; i < MAX_PARTIDAS; i++) {
        	partidas[i] = NULL;
    	}
}

void agregarJugador(string nickname, int edad, string contrasenia) {
  DtJugador dtJ(nickname, edad, contrasenia);
	  Jugador *jug = new Jugador(jug);
	  int i = 0;
	  while(jugadores[i] != NULL){
		  if(jugadores[i]->GetNickname() == nickname){
			  throw invalid_argument("El nickname ya existe. Nickname: " + nickname);
		  }
		  i++;
	  }
	  if(i != MAX_JUGADORES) {
		  jgadores[i] = jug;
	  }
}

void agregarVideojuego(string nombre, TipoJuego genero);

DtJugador** obtenerJugadores (int& cantJugadores);

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos);

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);

void iniciarPartida(string nickname, string videojuego, DtPartida* datos);
