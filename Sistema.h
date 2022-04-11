#ifndef SISTEMA_H
#define SISTEMA_H
#include "Header.h"
#include "Jugador.h"
#include "VideoJuego.h"

#include "Partida.h"
//sub clases Partida.h
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"

//enumeration
#include "Enum.h"
//data types
#include "DtVideoJuego.h"

#include "DtPartida.h"
//sub clases DtPartida.h
#include "DtPartidaIndividual.h"
#include "DtPartidaMultijugador.h"

#include "DtFechaHora.h"
#include "DtJugador.h"

void initialize_array();

void inicializarJugadores(Jugador * jugadores[]);

void inicializarJuegos(Videojuego * juegos[]);

void agregarJugador(string nickname, int edad, string contrasenia, Jugador * jugadores[]);

void agregarVideojuego(string nombre, TipoJuego genero, Videojuego * juegos[]);

DtJugador** obtenerJugadores (int& cantJugadores);

void mostrar_Jugadores_Menu(int& cantJugadores);

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos);

void mostrarVideoJuegos(int& cantVideojuegos);

void menu();

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);

void iniciarPartida(string nickname, string videojuego, DtPartida* datos);

void IniciarPartidasMenu();


Jugador *getJugadorByNick(string nickname);
Videojuego *getVideojuegoByNombre(string nombre);


#endif
