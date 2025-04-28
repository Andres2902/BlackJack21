#include <iostream>
#include <vector>
#include "Carta.h"
#include "Jugador.h"
#include "Administrador.h"
#include "Crupier.h"

using namespace std;

int main() {
    // Crear cartas iniciales
    Carta carta1("As", "Corazones");
    Carta carta2("10", "Diamantes");

    // Crear jugador con cartas iniciales, dinero y apuesta
    vector<Carta> manoJugador = {carta1, carta2};
    Jugador jugador1("Jugador 1 ", manoJugador, 1000, 0);

    // Crear crupier con una mano vacía
    vector<Carta> manoCrupier;
    Crupier crupier(manoCrupier);

    // Crear administrador con un solo jugador
    vector<Jugador> jugadores = {jugador1};
    Administrador administrador(jugadores);

    // Simular una apuesta
    cout << "Bienvenido a BlackJack21!\n";
    administrador.pedirApuesta(&jugador1);

    // Mostrar información del jugador después de la apuesta
    cout << "El jugador " << jugador1.getNombre() << " ahora tiene " << jugador1.getDinero() << " dinero restante.\n";

    // Simulación básica del flujo del juego
    cout << "El crupier reparte una carta al jugador...\n";
    Carta nuevaCarta("5", "Tréboles");
    jugador1.recibirCarta(nuevaCarta);

    // Mostrar mano actual del jugador
    cout << "Mano actual del jugador despues de recibir la carta:\n";
    for (const Carta &carta : jugador1.getMano()) {
        carta.mostrarCarta();
    }

    cout << "\nGracias por jugar BlackJack21!\n";
    return 0;
}
