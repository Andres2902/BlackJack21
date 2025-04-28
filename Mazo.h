#ifndef MAZO_H
#define MAZO_H

#include"Carta.h"
#include<vector>
#include"Jugador.h"

class Crupier; //Se incluye la clase Crupier para poder usar el puntero en la funcion primeraReparticion, pero no se define

using namespace std;

class Mazo{
  private:
    vector<Carta> mazo;

  public:
    Mazo();
    void castasRestantes();
    Carta darCarta();
    void mezclarMazo();
    void primeraReparticion(Jugador, Crupier*);


};
#endif // MAZO_H
