#include "Header.h"
#include "Sistema.h"

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

void agregarJugador(string nickname, int edad, string contrasenia){
    Jugador * nuevoJugador = new Jugador(nickname, edad, contrasenia);
    int i = 0;
    while( jugadores[i] != NULL){

        if( nuevoJugador->GetNickname() == jugadores[i]->GetNickname() ){
            //Aca va una excepcion: 
            cout << "El nickname ya existe. Nickname: " + nickname << endl;
            return;
        }
        i++;
    }
    if( i < MAX_JUGADORES ){
        jugadores[i] = nuevoJugador;
    }
    else {
        throw invalid_argument("Sistema de jugadores colapsado");
    }
}

void agregarVideojuego(string nombre, TipoJuego genero){
    Videojuego * nuevoJuego = new Videojuego(nombre, genero);
    int i = 0;
    while( videojuegos[i] != NULL){

        if( nuevoJuego->getNombre() == videojuegos[i]->getNombre() ){
            throw invalid_argument("El juego ya existe. Juego: " + nombre);
            return;
        }
        i++;
    }

    if( i < MAX_VIDEOJUEGOS ){
        videojuegos[i] = nuevoJuego;
    }
    else {
        throw invalid_argument("Sistema de juegos colapsado");
    }
}

DtJugador** obtenerJugadores(int& cantJugadores) {
    DtJugador **jug = new DtJugador*[cantJugadores];
    for (int i = 0; i < cantJugadores; i++) {
        jug[i] = NULL;
    }
    for (int i = 0; i <= cantJugadores; i++) {
        if (jugadores[i] != NULL)
            jug[i] = jugadores[i]->getJugador();
    }
    return jug;
}

DtVideojuego** obtenerVideojuegos(int& cantVideojuegos){

    int i = 0;

    while (videojuegos[i] != NULL && i < MAX_VIDEOJUEGOS-1){ //recorro hasta encontrar un lugar vacio o alcanzar el maximo de videojuegos
        i++; //aumentamos i a medida que se recorre el arreglo y se encuentran juegos.
    }
    
    cantVideojuegos = i; //se obtiene la cantidad de videojuegos.

    DtVideojuego **games = new DtVideojuego*[cantVideojuegos]; //instancio juegos e inicializo, con tamaño dado por la const.
    
    for (int i = 0; i < cantVideojuegos; i++){ //recorro el arreglo de videojuegos.
        games[i] = NULL; //vacio todos los lugares del arreglo
    }

    for (int i = 0; i <= cantVideojuegos; i++){ //recorro el arreglo hasta llegar al limite   (i)
        if (videojuegos[i] != NULL){//mientras que el arreglo de videojuegos no sea vacio
            games[i] = videojuegos[i]->getVideojuego();  //obtengo el nombre del o los videojuego/s
        }
    }

    return games;

}