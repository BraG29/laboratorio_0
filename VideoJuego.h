#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include<iostream>
#include<stdlib.h>
#include "DtVideojuego.h"
using namespace std;

enum class Tipojuego {Accion, Aventura, deporte, Otros};
class Videojuego {
public:
	
	Videojuego();
	Videojuego(const Videojuego& orig);
	virtual ~Videojuego();
	Videojuego(string, Tipojuego); //Constructor
	Videojuego(DtVideojuego& Videojuego); //Constructor
	void setVideojuego(string, Tipojuego);
	void setGenero(Tipojuego genero);
	Videojuego::Tipojuego getGenero() const;
	void setNombre()const;
	string getNombre() const;
	virtual DtVideojuego* getVideojuego();
	
private:
	std::string nombre;
	Tipojuego genero;
};


#endif
