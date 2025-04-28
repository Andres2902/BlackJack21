//libreria de la clase cartas
#ifndef _CARTAS_H
#define _CARTAS_H
#include<string>

using namespace std;
class Carta{
  private:
    string valor;
    string palo;

  public:
    Carta(string, string);// constructor
    //getters
    string getValor();
    // funciones
    void mostrarCarta() const;
   // void nuevaCarta(string, string, int); //modificado const
};

#endif // CARTAS_H
