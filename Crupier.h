//TODOS LOS ARCHIVOS INCLUIDOS EN EL PROYECTO
#ifndef CRUPIER_H
#define CRUPIER_H
#include "Carta.h"
#include "Mazo.h"
#include "Jugador.h"
#include<vector>
using namespace std;

class Crupier{
  private:
  //  Mazo mazoJuego;   //Este mazo no me convence, porque ya definí el mazo en la clase Mazo, y al repartir lo uso desde ahí
    vector<Carta> manoCrupier;
  public:
    Crupier(/*Mazo, */vector<Carta>);
    void recibirCarta(Carta);
    void repartirCarta(); 
    void ofrecerCartas();
    void mostarManoParcial();
    void mostrarManoCompleta();
    void nuevoJuego();
    void decirGanadores();
};

#endif //CRUPIER_H