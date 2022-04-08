programa: DtFechaHora.o DtJugador.o DtPartida.o DtPartidaMultijugador.o DtVideoJuego.o Jugador.o main.o Partida.o PartidaIndividual.o PartidaMultijugador.o Sistema.o VideoJuego.o
	g++-11 DtFechaHora.o DtJugador.o DtPartida.o DtPartidaMultijugador.o DtVideoJuego.o Jugador.o main.o Partida.o PartidaIndividual.o PartidaMultijugador.o Sistema.o VideoJuego.o
DtFechaHora.o: 
	g++-11 -c DtFechaHora.cpp 
DtJugador.o: 
	g++-11 -c DtJugador.cpp 
DtPartida.o: 
	g++-11 -c DtPartida.cpp 
DtPartidaIndividual.o: 
	g++-11 -c DtPartidaIndividual.cpp 
DtPartidaMultijugador.o: 
	g++-11 -c DtPartidaMultijugador.cpp .h
DtVideoJuego.o: 
	g++-11 -c DtVideoJuego.cpp
Jugador.o: 
	g++-11 -c Jugador.cpp 
main.o: 
	g++-11 -c main.cpp
Partida.o: 
	g++-11 -c Partida.cpp 
PartidaIndividual.o: 
	g++-11 -c PartidaIndividual.cpp 
PartidaMultijugador.o:
	g++-11 -c PartidaMultijugador.cpp 
Sistema.o:
	g++-11 -c Sistema.cpp Sistema.h
VideoJuego.o: 
	g++-11 -c VideoJuego.cpp 