programa: main.o Sistema.o Jugador.o VideoJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o DtVideoJuego.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o DtJugador.o
	g++-11 main.o Sistema.o Jugador.o VideoJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o DtVideoJuego.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o DtJugador.o
DtFechaHora.o: 
	g++-11 -c DtFechaHora.cpp 
DtJugador.o: 
	g++-11 -c DtJugador.cpp 
DtPartida.o: 
	g++-11 -c DtPartida.cpp 
DtPartidaIndividual.o: 
	g++-11 -c DtPartidaIndividual.cpp 
DtPartidaMultijugador.o: 
	g++-11 -c DtPartidaMultijugador.cpp
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
	g++-11 -c Sistema.cpp
VideoJuego.o: 
	g++-11 -c VideoJuego.cpp 
