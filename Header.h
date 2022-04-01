#ifndef HEADER_H
#define HEADER_H
#define MAX_JUGADORES = 10
#define MAX_VIDEOJUEGOS = 10
#define MAX_PARTIDAS = 100

using namespace std;

#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>

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

//arrays
Jugador *jugadores[MAX_JUGADORES];
Videojuego *videojuegos[MAX_vIDEOJUEGOS];
Partida *partidas[MAX_PARTIDAS];

void menu();
void initialize_array();

#endif
