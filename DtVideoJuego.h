#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include<iostream>
#include<stdlib.h>

class DtVideojuego {
public:
	DtVideojuego();
	DtVideojuego(const DtVideojuego& orig);
	DtVideojuego(string _titulo, TipoJuego _genero, float totalHorasDeJuego);
	virtual ~DtVideojuego();
	void setGenero(TipoJuego genero);
	TipoJuego getGenero() const;
	void setNombre() const;
	string getNombre() const;
private:
	string nombre;
	TipoJuego genero;
	float totalHorasDeJuego;
};


#endif
