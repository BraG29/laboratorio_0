#include "Header.h"
#include "Sistema.h"
#include "Jugador.cpp"
#include "Sistema.cpp"
#include "DtVideoJuego.cpp"
#include "VideoJuego.cpp"

int main(){
    Jugador * jugadores[MAX_JUGADORES];
    Videojuego * juegos[MAX_VIDEOJUEGOS];
    TipoJuego genero;
    inicializarJuegos(juegos);
    inicializarJugadores(jugadores);
    agregarJugador("Pablo", 16, "jijijija123", jugadores);
    agregarVideojuego("Terraria", genero, juegos);
    cout << "Juego: " + juegos[0]->getNombre() << endl;
    return 0;
}