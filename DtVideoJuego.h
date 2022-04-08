#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include "Header.h"
#include "Enum.h"
#include "VideoJuego.h"
#include "Partida.h"
class DtVideojuego {
public:
	//Constructores
	DtVideojuego();
	DtVideojuego(const DtVideojuego& orig);
	DtVideojuego(string _titulo, TipoJuego _genero, float totalHorasDeJuego);
	DtVideojuego(string _titulo, TipoJuego _genero);

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
	//operaciones
	Partida** getDtPartidas();
	void inicializarDtPartida();

private:
	string nombre;
	TipoJuego genero;
	float totalHorasDeJuego = 0;
	Partida** dtPartidas = new Partida* [MAX_PARTIDAS];
};


#endif
