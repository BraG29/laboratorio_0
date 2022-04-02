#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include<iostream>
#include<stdlib.h>

class DtVideojuego {
public:
	//Constructores
	DtVideojuego();
	DtVideojuego(const DtVideojuego& orig);
	DtVideojuego(string _titulo, TipoJuego _genero, float totalHorasDeJuego);

	//Destructor
	virtual ~DtVideojuego();

	//setters
	void setGenero(TipoJuego genero);
	void setNombre(string);
	void setTotalHorasDeJuego(float);

	//getters
	TipoJuego getGenero() const;
	string getNombre() const;
	float getTotalHorasDeJuego() const;


private:
	string nombre;
	TipoJuego genero;
	float totalHorasDeJuego;
};


#endif
