#include"Jugador.h"
#include<iostream>

using namespace std;

Jugador::Jugador(string _nombre, vector<Carta> _manoJugador, int _dinero, int _apuesta){
    nombre = _nombre;
    manoJugador = _manoJugador;
    dinero = _dinero;
    apuesta = _apuesta;
}
string Jugador::getNombre() {
    return nombre;
}

// Implementación del getter getDinero
int Jugador::getDinero() {
    return dinero;
}

void Jugador:: mostrarMano(){
}
  void Jugador::pedirCarta(){} //Esta funcion no me convence, porque el jugador no pide la carta, el crupier la reparte y el la acepta o no, y ya tengo la opcion de recibirCarta()
  void Jugador::plantarse(){} //Me parece inecesaria, porque el jugador se planta cuando no quiere recibir mas cartas, y ya tengo la opcion de recibirCarta(), aunque podría ser una bandera que se active cuando el jugador no quiera recibir mas cartas, pregunte, ¿Deseas recibir otra carta? y si dice que no, se activa la bandera y se para de recibir cartas
  void Jugador::apostar(int cantidad){
      if (cantidad>0 && cantidad<=dinero){
          apuesta = cantidad;
          dinero -= cantidad;
      }
    else {
      cout << "Apuesta no válida. El jugador no tiene suficiente dinero o no es un número válido.\n";
    }
  }
  void Jugador::dividir(){} //Opcional, si se desea agregar la opcion de dividir y hacer el juego mas complejo
  void Jugador::recibirCarta(Carta recibirCarta){
     manoJugador.push_back(recibirCarta);
  } //Esta función se debe encargar de recibir cartas y añadirlas al vector manoJugador, se utiliza junto con el metodo darCarta() de la clase Mazo y el metodo repartirCarta() de la clase Crupier, se podría evitar la intermediación de repartirCarta() y que el jugador reciba directamente del mazo, pero se hace así para que el crupier sea el que reparta las cartas
  void Jugador::recibirPago(int cantidad){   //cantidad sale  de apostar() en Jugador
      dinero += cantidad;
  }
  void Jugador::realizarPago(int cantidad){ //cantidad sale de apostar()
      dinero -= cantidad;
  }
