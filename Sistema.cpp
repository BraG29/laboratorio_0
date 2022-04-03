#include "Header.h"
#include "Sistema.h"

void inicializarJugadores(Jugador * jugadores[]){
    for( int i = 0; i < MAX_JUGADORES; i++){
        jugadores[i] = NULL;
    }
}

void inicializarJuegos(Videojuego * juegos[]){
    for( int i = 0; i < MAX_VIDEOJUEGOS; i++){
        juegos[i] = NULL;
    }
}


void agregarJugador(string nickname, int edad, string contrasenia, Jugador * jugadores[]){
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

void agregarVideojuego(string nombre, TipoJuego genero, Videojuego * juegos[]){
    Videojuego * nuevoJuego = new Videojuego(nombre, genero);
    int i = 0;
    while( juegos[i] != NULL){

        if( nuevoJuego->getNombre() == juegos[i]->getNombre() ){
            throw invalid_argument("El juego ya existe. Juego: " + nombre);
            return;
        }
        i++;
    }

    if( i < MAX_VIDEOJUEGOS ){
        juegos[i] = nuevoJuego;
    }
    else {
        throw invalid_argument("Sistema de juegos colapsado");
    }


}

DtJugador** obtenerJugadores (int& cantJugadores){
    
}

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos){

}