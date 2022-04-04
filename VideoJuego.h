#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include "Header.h"
#include "Enum.h"
#include "DtVideoJuego.h"
#include "Partida.h"

class Videojuego {
public:
	//constructores
	Videojuego();
	Videojuego(const Videojuego& orig);
	Videojuego(string, TipoJuego); 
	Videojuego(DtVideojuego& Videojuego); 
	
	//destructor
	virtual ~Videojuego();
	
	//setters
	void setVideojuego(string, TipoJuego);
	void setGenero(TipoJuego genero);
	void setNombre(string nombre);
	//getters
	TipoJuego getGenero() const;
	string getNombre() const;
	Partida ** getPartidas();
	
	virtual DtVideojuego* getVideojuego();

	int agregarPartida(Partida*);
	
private:
	std::string nombre;
	TipoJuego genero;
	//relacion de videojuego con partidas:
	Partida * partidas[MAX_PARTIDAS];
};


#endif
