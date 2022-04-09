programa: main.o Sistema.o Jugador.o VideoJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o DtVideoJuego.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o DtJugador.o
	g++ main.o Sistema.o Jugador.o VideoJuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o DtVideoJuego.o DtPartida.o DtPartidaIndividual.o DtPartidaMultijugador.o DtFechaHora.o DtJugador.o
DtFechaHora.o: 
	g++ -c DtFechaHora.cpp 
DtJugador.o: 
	g++ -c DtJugador.cpp 
DtPartida.o: 
	g++ -c DtPartida.cpp 
DtPartidaIndividual.o: 
	g++ -c DtPartidaIndividual.cpp 
DtPartidaMultijugador.o: 
	g++ -c DtPartidaMultijugador.cpp
DtVideoJuego.o: 
	g++ -c DtVideoJuego.cpp
Jugador.o: 
	g++ -c Jugador.cpp 
main.o: 
	g++ -c main.cpp
Partida.o: 
	g++ -c Partida.cpp 
PartidaIndividual.o: 
	g++ -c PartidaIndividual.cpp 
PartidaMultijugador.o:
	g++ -c PartidaMultijugador.cpp 
Sistema.o:
	g++ -c Sistema.cpp
VideoJuego.o: 
	g++ -c VideoJuego.cpp

clear:
	rm *.o rm *.out
