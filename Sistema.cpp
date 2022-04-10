#include "Header.h"
#include "Sistema.h"

//arrays
Jugador *jugadores[MAX_JUGADORES];
Videojuego *videojuegos[MAX_VIDEOJUEGOS];
Partida *partidas[MAX_PARTIDAS];

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
    int i = 0;
    while( jugadores[i] != NULL && i < MAX_JUGADORES){
        if( nickname == jugadores[i]->GetNickname() ){
            throw invalid_argument("El jugador: " + nickname + " ya existe");
        }
        i++;
    }
    if( i < MAX_JUGADORES ){
        Jugador * nuevoJugador = new Jugador(nickname, edad, contrasenia);
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

    system ("clear");

    cout << "Jugador: " << endl;
    cout << "Nombre: " << nickname << endl;
    cout << "Edad: " << edad << endl;
    cout << "Contrasenia: " << contrasenia << endl;
    agregarJugador(nickname, edad, contrasenia);
    system ("clear");

}

void agregarVideojuego(string nombre, TipoJuego genero){
    int i = 0;
    while( videojuegos[i] != NULL && i < MAX_JUGADORES ){

        if( nombre == videojuegos[i]->getNombre() ){
            throw invalid_argument("El juego: " + nombre + " ya existe");
        }
        i++;
    }

    if( i < MAX_VIDEOJUEGOS ){
        Videojuego * nuevoJuego = new Videojuego(nombre, genero);
        videojuegos[i] = nuevoJuego;
    }
    else {
        throw invalid_argument("Sistema de juegos colapsado");
    }
}

void insertarVideoJuego_Menu() {
    string nombre = "";
    int opGenero;
    cout << "Ingrese el nombre del videojuego: ";
    cin >> nombre;
    cout << "Ingrese el genero del juego a ingresar: " << endl;
    cout << "1- Accion." << endl;
    cout << "2- Aventura." << endl;
    cout << "3- Deporte." << endl;
    cout << "4- Otro." << endl;
    cin >> opGenero;
    
    system ("clear");

    if( opGenero < 5 || opGenero > 0){
            switch (opGenero)
            {
            case 1:
                agregarVideojuego(nombre, Accion);
                break;
            case 2:
                agregarVideojuego(nombre, Aventura);
                break;
            case 3:
                agregarVideojuego(nombre, Deporte);
                break;
            case 4:
                agregarVideojuego(nombre, Otro);
                break;
            }
            getchar();
            getchar();

            cout << "Se ha agregado el juego con nombre: " + nombre <<endl;
    }
    else{
        cout << "Opcion invalida" <<endl;
    } 
}

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

    //cout << "cualquier bobada \n";
 
    for (int i = 0; i < cantJugadores; i++) {
        if (jugadores[i] != NULL)
            jug[i] = jugadores[i]->getJugador();
    }

    return jug;
}

void mostrar_Jugadores_Menu(int& cantJugadores){

    int i = 0;
     

    DtJugador** players = obtenerJugadores(cantJugadores);

    while (i < cantJugadores){
        cout << "Información del jugador:" << endl;
        cout << "Nickname: " << players[i]->getNickname() << endl;
        cout << "Edad: " << players[i]->getEdad() << endl;
        i++;
        
    }

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

    for (int i = 0; i < cantVideojuegos; i++){ //recorro el arreglo hasta llegar al limite   (i)
        if (videojuegos[i] != NULL){//mientras que el arreglo de videojuegos no sea vacio
            games[i] = videojuegos[i]->getVideojuego();  //obtengo el nombre del o los videojuego/s
            games[i]->setTotalHorasDeJuego(videojuegos[i]->getPartidas()[i]->darTotalHorasParticipantes());
            //obtengo las partidas y la duracion de las mismas
        }
    }

    return games;

}

void mostrarVideoJuegos(int& cantVideojuegos){
     int i = 0;
     
    DtVideojuego** Jueguitos = obtenerVideojuegos(cantVideojuegos);

    while (i < cantVideojuegos){
        cout << "Información del videojuego:" << endl;
        cout << "Nombre: " << Jueguitos[i]->getNombre() << endl;
        cout << "Género: " << Jueguitos[i]->getGenero() << endl;
        cout << "Horas de juego: " << Jueguitos[i]->getTotalHorasDeJuego() << endl;
        i++;
        
    }
}



void menu() {
    int input = -1;
    int cantJugadores = 0;
    int cantVideojuegos= 0;

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

        system ("clear");

        try{
            switch (input) {
                case 1:
                    insertarJugadores_Menu();
                    break;
                case 2:
                    insertarVideoJuego_Menu();
                    break;
                case 3:
                    mostrar_Jugadores_Menu(cantJugadores);
                    break;
                case 4:
                    mostrarVideoJuegos(cantVideojuegos);
                    break;
                case 5:
                //    obtenerPartidas();
                    break;
                case 6:
                //    iniciarPartida();
                    break;
                case 0:
                // exit;
                    break;
                default: menu();
        }
        }
        catch(invalid_argument& error){
            cout << error.what();
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
    throw invalid_argument("No existe el videojuego: " + videojuego);  
}

/*
void iniciarPartida(string nickname, string videojuego, DtPartida& datos) {
    Jugador *jug = getJugadorByNick(nickname);//busco el jugador
    Videojuego *videojuegoBuscado = getVideojuegoByNombre(videojuego);//busco el videojuego

    if (jug == NULL || videojuegoBuscado == NULL || jug->existVideojuego(videojuego)) {//Controlo si encontré a mi jugador y videojuego
        throw invalid_argument("Invalid Argument");//tiro error si no los encontré
    }
    
	Partida *p;
    try {
        DtPartidaIndividual &dtI = dynamic_cast<DtPartidaIndividual&> (datos);
        p = new PartidaIndividual(dtI);
    } catch (bad_cast& ex) {
        cout << "Bad cast" << endl;
        DtPartidaMultijugador &dtMJ = dynamic_cast<DtPartidaMultijugador&> (datos);
        p = new PartidaMultijugador(dtMJ);
    }

    
    int i = 0;
    while (partidas[i] != NULL) {
        if (partidas[i]->getExiste() == datos.getExiste()) {
            throw invalid_argument("La partida ya existe.");
        }
        i++;
    }
    if (i != MAX_PARTIDAS) {
        partidas[i] = p;
	p->getExiste() = true;
    }
}
*/

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
