#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Carta.h"
#include "Mazo.h"
#include "Crupier.h"
#include "Jugador.h"
#include <vector>
#include <string>

using namespace std;

class Administrador{
private:
  vector<Jugador> jugadores; //este vector se hace por si logramos que sean mas de 1, sino sería un solo jugador de la clase Jugador
public:
  Administrador(vector<Jugador>);
  void agregarJugador();
  void eliminarJugador();
  void pedirApuesta(Jugador*);
  void mostrarJugadores();
  void pagarGanadores();
  void cobrarPerdedores();
};

#endif // ADMINISTRADOR_H