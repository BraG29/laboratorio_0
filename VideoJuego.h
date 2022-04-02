#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include "Header.h"
#include "Enum.h"
#include "DtVideoJuego.h"

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
	
	virtual DtVideojuego* getVideojuego();
	
private:
	std::string nombre;
	TipoJuego genero;
};


#endif
