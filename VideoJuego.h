#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include "Header.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

class Videojuego {
public:
	Videojuego();
	Videojuego(const Videojuego& orig);
	virtual ~Videojuego();
	Videojuego(string, TipoJuego); //Constructor
	Videojuego(DtVideojuego& Videojuego); //Constructor
	void setVideojuego(string, TipoJuego);
	void setGenero(TipoJuego genero);
	TipoJuego getGenero() const;
	void setNombre()const;
	string getNombre() const;
	bool existsVideojuego(string nombre);
	virtual DtVideojuego* getVideojuego();
private:
	std::string nombre;
	TipoJuego genero;
};


#endif
