#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include<iostream>
#include<stdlib.h>
#include "VideoJuego.h"
class DtVideojuego {
public:
	//Constructores
	DtVideojuego();
	DtVideojuego(const DtVideojuego& orig);
	DtVideojuego(string _titulo, Tipojuego _genero, float totalHorasDeJuego);

	//Destructor
	virtual ~DtVideojuego();

	//setters
	void setGenero(Tipojuego genero);
	void setNombre(string _titulo);
	void setTotalHorasDeJuego();
	
	//getters
	Tipojuego getGenero() const;
	string getNombre() const;
	float getTotalHorasDeJuego() const;
	
private:
	string nombre;
	Tipojuego genero;
	float totalHorasDeJuego;
};


#endif
