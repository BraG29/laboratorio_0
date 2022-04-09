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

void insertarJugadores_Menu(){
    string nickname = "";
    string contrasenia = "";
    unsigned int edad = 0;

    cout << "Ingrese el nickname del jugador: ";
    cin >> nickname;
    cout << endl;
    cout << "Ingrese la edad del jugador : ";
    cin >> edad;
    cout << endl;
    cout << "Ingrese la contrasenia del jugador: ";
    cin >> contrasenia;
    cout << endl;
    agregarJugador(nickname, edad, contrasenia);

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

/*
void insertarVideoJuego_Menu(){
    string nombreJuego = "";
    int genero_juego; //como obtener el enum?
    TipoJuego = genero_juego ;

    cout << "Ingrese el nombre del videojuego: ";
    cin >> nombreJuego;
    cout << endl;
    cout << "Ingrese el género del videojuego";
    cin >> genero_juego;
    cout << endl;

    agregarVideojuego(nombreJuego, genero_juego);
}

//Test jona
void insertarVideoJuego_Menu() {
    string nombre = "";
    TipoJuego genero_juego;
    cout << "Ingrese el nombre del videojuego: ";
    cin >> nombre << endl;
    cout << "Escriba el genero del juego a ingresar: Accion, Aventura, Deporte, Otro.)" << endl;
    cin >> genero_juego;
    switch (genero_juego)
    {
    case 1:
        if (genero_juego == TipoJuego::Accion) {
            agregarVideojuego(nombre, genero_juego);
        }
        break;
    case 2:
        if(genero_juego == TipoJuego::Aventura) {
            agregarVideojuego(nombre, genero_juego);
        }
        break;
    case 3:
        if (genero_juego == TipoJuego::Deporte) {
            agregarVideojuego(nombre, genero_juego);
        }
        break;
    case 4:
        if (genero_juego == TipoJuego::Otro) {
            agregarVideojuego(nombre, genero_juego);
        }
        break;
    default:
        cout << "El genero del juego o esvalido." << endl;
        break;
    }
}
*/

DtJugador** obtenerJugadores(int& cantJugadores) {
    
    int i = 0;

    while (jugadores[i] != NULL && i < MAX_JUGADORES){
        i++;
    }
    
    cantJugadores = i;

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

    while (videojuegos[i] != NULL && i < MAX_VIDEOJUEGOS){ //recorro hasta encontrar un lugar vacio o alcanzar el maximo de videojuegos
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
            games[i]->getDtPartidas()[i]->setDuracion(videojuegos[i]->getPartidas()[i]->darTotalHorasParticipantes());
            //obtengo las partidas y la duracion de las mismas
        }
    }

    return games;

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
                insertarJugadores_Menu();
                break;
            case 2:
               // agregarVideojuego();
                break;
            case 3:
               // obtenerJugadores();
                break;
            case 4:
               // obtenerVideojuegos();
                break;
            case 5:
               // obtenerPartidas();
                break;
            case 6:
               // iniciarPartida();
                break;
            case 0:
               // exit;
                break;
            default: menu();
        }
    } while (input != 0);
}


DtPartida** obtenerPartidas(string videojuego, int& cantPartidas){
    int i, c;
    for( i=0; i < MAX_JUGADORES; i++){
        if(videojuegos[i]->getNombre() == videojuego ){
            DtPartida ** dtPartidas = new DtPartida*[MAX_PARTIDAS];
            c = 0; 
            while( videojuegos[i]->getPartidas()[c] != NULL ){
                dtPartidas[c] = videojuegos[i]->getPartidas()[c]->getDatosPartida();
                c++;
            }
            cantPartidas += c;
            return dtPartidas;
        }
    }
    if( i >= MAX_JUGADORES){
        //se tira una excepcion y se sale de la funcion
    } 
}

void iniciarPartida(string nickname, string videojuego, DtPartida* datos) {
    Jugador *jug = getJugadorByNick(nickname);//busco el jugador
    Videojuego *videojuegoBuscado = getVideojuegoByNombre(videojuego);//busco el videojuego

    if (jug == NULL || videojuegoBuscado == NULL ) {//Controlo si encontré a mi jugador y videojuego
        throw invalid_argument("Invalid Argument");//tiro error si no los encontré
    }

    //instancia clase abstracta????
	Partida *p;
	Partida *pda = new Partida(fecha, duracion);

    	jug->SetJuegos(pda); //SetJuegos no existe, aparte que la clase jugador no guarda ningún juego.

    try {
        DtPartidaIndividual &dtI = dynamic_cast<DtPartidaIndividual&> (datos);
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
        partidas[i] = p;
    }
    }


Jugador * getJugadorByNick(string nickname) {//recibe el nombre del jugador y busca en el array jugadores a ver si hay algúno registrado, en caso contrario, tira NULL
    for (int i = 0; i <= MAX_JUGADORES; i++) {
        if (jugadores[i] == NULL) return NULL;
        if (jugadores[i]->GetNickname() == nickname) {
            return jugadores[i];
        }
    }
    return NULL;
}

Videojuego * getVideojuegoByNombre(string nombre) {//lo mismo pero en videojuego
    for (int i = 0; i <= MAX_VIDEOJUEGOS; i++) {
        if (videojuegos[i] == NULL) return NULL;
        if (videojuegos[i]->getNombre() == nombre) {
            return videojuegos[i];
        }
    }
    return NULL;
}