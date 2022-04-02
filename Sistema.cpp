#include "Header.h"
#include "Sistema.h"

void agregarJugador(string nickname, int edad, string contrasenia, Jugador * jugadores[]){
    Jugador * nuevoJugador = new Jugador(nickname, edad, contrasenia);
    int i = 0;
    while( jugadores[i] != NULL){

        if( nuevoJugador->GetNickname() == jugadores[i]->GetNickname() ){
            throw invalid_argument("El nickname ya existe. Nickname: " + nickname);
            return;
        }
        i++;
    }
    if( i < MAX_JUGADORES ){
        jugadores[i] = nuevoJugador;
    }
    else {
        throw invalid_argument("Sistema colapsado");
    }
}