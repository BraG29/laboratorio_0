#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include "Header.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

class Videojuego {
public:
	enum class Tipojuego {Accion, Aventura, deporte, Otros};
	Videojuego();
	Videojuego(const Videojuego& orig);
	virtual ~Videojuego();
	Videojuego(string, Tipojuego); //Constructor
	Videojuego(DtVideojuego& Videojuego); //Constructor
	void setVideojuego(string, Tipojuego);
	void setGenero(Videojuego::Tipojuego genero);
	Videojuego::Tipojuego getGenero() const;
	void setNombre()const;
	string getNombre() const;
	virtual DtVideojuego* getVideojuego();
private:
	std::string nombre;
	Videojuego::Tipojuego genero;
};


#endif
