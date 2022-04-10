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

//Registra un nuevo jugador en el sistema.
//Si ya existe un jugador registrado con el mismo nickname,
//se lanza una excepción de tipo std::invalid_argument.

void agregarVideojuego(string nombre, TipoJuego genero, Videojuego * juegos[]);

//Registra un nuevo videojuego en el sistema.
//Si ya existe un videojuego registrado con el mismo nombre,
//se lanza una excepción de tipo std::invalid_argument.

DtJugador** obtenerJugadores (int& cantJugadores);

void mostrar_Jugadores_Menu(int& cantJugadores);

//Devuelve un arreglo con información sobre los jugadores registrados en el sistema. El parámetro
//cantJugadores es un parámetro de salida donde se devuelve la cantidad de jugadores devueltos
//por la operación (corresponde a la cantidad de instancias de DtJugador retornadas).

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos);

void mostrarVideoJuegos(int& cantVideojuegos);

/*
Devuelve un arreglo con información sobre los videojuegos registrados en el sistema. El parámetro
cantVideojuegos es un parámetro de salida donde se devuelve la cantidad de jugadores
devueltos por la operación (corresponde a la cantidad de instancias de DtVideojuego retornadas).
El atributo totalHorasDeJuego corresponde a la suma de horas jugadas por todos los jugadores
del videojuego. Esto debe calcularse sumando las horas devueltas por las invocaciones a
darTotalHorasParticipantes() sobre cada partida del juego. Si la partida es individual, la
cantidad de horas devuelta por dicha operación es igual a su duración, mientras que si es multijugador
devuelve su duración multiplicada por la cantidad de participantes de la partida
*/

void menu();

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);
/*
Devuelve un arreglo con información de las partidas del videojuego identificado por videojuego.
El parámetro cantPartidas es un parámetro de salida donde se devuelve la cantidad de partidas
devueltas por la operación (corresponde a la cantidad de instancias de DtPartida retornadas).
Entre los datos devueltos para ambos tipos de partida se encuentra la duración. Además, entre los
específicos de cada partida individual se encuentra si la misma es o no continuación de una partida
anterior, mientras que para cada partida multijugador se indica si la misma es transmitida en vivo y la
cantidad total de jugadores que se unen a la misma junto con sus nicknames. Si no existe un
videojuego registrado con el nombre enviado, se lanza una excepción de tipo
std::invalid_argument.*/

void iniciarPartida(string nickname, string videojuego, DtPartida* datos);

/*
Registra una partida individual o multijugador del videojuego identificado por videojuego,
iniciada por el jugador identificado por nickname. El parámetro de entrada datos contiene la
información completa de la partida. Entre los datos comunes a ambos tipos de partida se encuentra la
duración. Además, si datos es una instancia de DtPartidaIndividual contiene si la partida
es o no una continuación de una partida anterior, mientras que si es un instancia de
DtPartidaMultijugador, indica si la partida es transmitida en vivo y la cantidad total de
jugadores que se unen a la misma junto con sus nicknames. La partida se da de alta con la fecha del
sistema al momento del registro. Si no existe un jugador o videojuego registrado con el nickname y
nombre enviados, se lanza una excepción de tipo std::invalid_argument.
*/

#endif