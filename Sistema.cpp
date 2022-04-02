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
		  jugadores[i] = jug;
	  }
}

void agregarVideojuego(string nombre, TipoJuego genero);

/**
 * 
 * @param cantJugadores
 * @return 
 */
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

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos);

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);

//Para testear -Jona ˅˅˅˅˅

void iniciarPartida(string nickname, string videojuego, DtPartida* datos) {
    Jugador *jug = getJugadorByNick(nickname);
    Videojuego *videojuego = getVideojuegoByNombre(nombre);
    if (jug == NULL || videojuego == NULL || jug->existsVideojuego(nombre)) { //exist esta en jugador.h y .cpp
        throw invalid_argument("Invalid Argument");
    }
	Partida *p;
	Partida *pda = new Partida(fecha, duracion);
    	jug->SetJuegos(pda);

    try {
        DtIndivudual &dtI = dynamic_cast<DtPartidaIndividual&> (datos);
        p = new PartidaIndividual(dtI);
    } catch (bad_cast& multi) {
        cout << "Bad cast" << endl;
        DtPartidaMultijugador &dtMJ = dynamic_cast<DtPartidaMultijugador&> (datos);
        p = new PartidaMultijugador(dtMJ);
    }
    int i = 0;
    while (partidas[i] != NULL) {
        if (partidas[i]->getFecha() == datos.GetFecha()) {
            throw invalid_argument("La partida ya existe.");
        }
        i++;
    }
    if (i != MAX_PARTIDAS) {
        partida[i] = p;
    }
    }

Jugador * getJugadorByNick(string nickname) {
    for (int i = 0; i <= MAX_JUGADORES; i++) {
        if (jugadores[i] == NULL) return NULL;
        if (jugadores[i]->GetNickname() == nickname) {
            return jugadores[i];
        }
    }
    return NULL;
}

Videojuego * getVideojuegoByNombre(string nombre) {
    for (int i = 0; i <= MAX_VIDEOJUEGOS; i++) {
        if (videojuegos[i] == NULL) return NULL;
        if (videojuegos[i]->getNombre() == nombre) {
            return videojuegos[i];
        }
    }
    return NULL;
}


void menu() {
    int input = -1;
    do {
        cout << "Menu" << endl;
        cout << "1- Agregar Jugador" << endl;
        cout << "2- Agregar Videojuego" << endl;
        cout << "3- Obtener Jugadores" << endl;
        cout << "4- Obtener Videojuegos" << endl;
        cout << "5- Obtener Partidas" << endl;
        cout << "6- Iniciar Partida" << endl;
        cout << "0- Salir" << endl;
        cin >> input;
        switch (input) {
            case 1:
                agregarJugador();
                break;
            case 2:
                agregarVideojuego();
                break;
            case 3:
                obtenerJugadores();
                break;
            case 4:
                obtenerVideojuegos();
                break;
            case 5:
                obtenerPartidas();
                break;
            case 6:
                iniciarPartida();
                break;
            case 0:
                exit;
                break;
            default: menu();
        }
    } while (input != 0);
}
