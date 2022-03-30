#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include<iostream>
#include<stdlib.h>

class DtVideojuego {
public:
	DtVideojuego();
	DtVideojuego(const DtVideojuego& orig);
	DtVideojuego(string _titulo, Tipojuego _genero, float totalHorasDeJuego);
	virtual ~DtVideojuego();
	void setGenero(Videojuego::Tipojuego genero);
	DtVideojuego::Tipojuego getGenero() const;
	void setNombre() const;
	string getNombre() const;
private:
	string nombre;
	DtVideojuego::Tipojuego genero;
	float totalHorasDeJuego;
};


#endif
