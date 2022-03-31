#include "Header.h"

void agregarJugador(string nickname, int edad, string contrasenia);

void agregarVideojuego(string nombre, TipoJuego genero);

DtJugador** obtenerJugadores (int& cantJugadores);

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos);

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);

void iniciarPartida(string nickname, string videojuego, DtPartida* datos);