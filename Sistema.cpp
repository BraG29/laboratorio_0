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
  DtJugador dtJ(nickname, edad, contrasenia); //La clase DtJugador no contiene contraseña.
	  Jugador * jug = new Jugador(*jug); //el constructor me pide que el parametro sea un puntero.
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
            jug[i] = jugadores[i]->getJugador();//getJugador todavía no existe.
    }
    return jug;
}

DtVideojuego** obtenerVideojuegos (int& cantVideojuegos);

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);

void iniciarPartida(string nickname, string videojuego, DtPartida* datos);

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
