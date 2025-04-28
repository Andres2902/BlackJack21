#ifndef JUGADOR_H
#define JUGADOR_H
#include "Carta.h"
#include <vector>
#include <string>
using namespace std;

class Jugador{
  private:
    string nombre;
    vector<Carta> manoJugador;
    int dinero;
    int apuesta;
  public:
    //agregamos estos getters
    string getNombre();
    int getDinero();
     vector<Carta>& getMano(); // M�todo para obtener la mano del jugador para que as� se pueda ir actualizando mas facil creo yo

    Jugador(string, vector<Carta>, int, int); // recibe (Nombre, Carta, dinero actual, dinero apostado)
    void mostrarMano();
    void pedirCarta(); //Esta funcion no me convence, porque el jugador no pide la carta, el crupier la reparte y el la acepta o no, y ya tengo la opcion de recibirCarta()
    void plantarse(); //Me parece inecesaria, porque el jugador se planta cuando no quiere recibir mas cartas, y ya tengo la opcion de recibirCarta(), aunque podr�a ser una bandera que se active cuando el jugador no quiera recibir mas cartas, pregunte, �Deseas recibir otra carta? y si dice que no, se activa la bandera y se para de recibir cartas
    void apostar(int);
    void dividir(); //Opcional, si se desea agregar la opcion de dividir y hacer el juego mas complejo
    void recibirCarta(Carta); //Esta funci�n se debe encargar de recibir cartas y a�adirlas al vector manoJugador, se utiliza junto con el metodo darCarta() de la clase Mazo y el metodo repartirCarta() de la clase Crupier, se podr�a evitar la intermediaci�n de repartirCarta() y que el jugador reciba directamente del mazo, pero se hace as� para que el crupier sea el que reparta las cartas
    void recibirPago(int);
    void realizarPago(int);

};
#endif // JUGADOR_H
