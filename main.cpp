#include "Header.h"
#include "Sistema.h"
#include "Jugador.cpp"
#include "Sistema.cpp"

int main(){
    Jugador * jugadores[MAX_JUGADORES];
    agregarJugador("Pablo", 16, "jijijija123", jugadores);
    cout << jugadores[0]->GetNickname() << endl;
    return 0;
}