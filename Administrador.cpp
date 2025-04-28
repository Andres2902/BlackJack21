#include"Administrador.h"
#include<iostream>

using namespace std;

Administrador::Administrador(vector<Jugador> _jugadores){
    jugadores = _jugadores;
}

void Administrador::pedirApuesta(Jugador* jugador) {
    int cantidad;
    std::cout << "Ingresa la cantidad a apostar: ";
    std::cin >> cantidad;

    jugador->apostar(cantidad);  // Registra la apuesta del jugador y la manda a la funcion apostar() de la clase Jugador
}
