#include "Mazo.h"
#include "Carta.h"
#include "Jugador.h"
#include "Crupier.h" //Se incluye para poder usar el metodo recibirCarta() de la clase Crupier pero no en Mazo.h, sino en Mazo.cpp
#include <iostream>
#include <vector>
using namespace std;

Mazo::Mazo(){
    vector<string> valores = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}; //Esta como datos string, pero  luego se cambia a int para los cálculos y para definir el valor numérico de las cartas.
    vector<string> palos = {"Corazones", "Diamantes", "Tréboles", "Picas"};
    for (int mazos = 0; mazos < 8; ++mazos) {  // Repetimos 8 veces porque según el juego usa 8 mazos de cartas juntos
        for (const auto& palo : palos) { //Se usa & para referenciar el valor del vector y no una copia, y se usa auto para que el compilador determine el tipo de dato, const signifca que no se puede modificar el valor del vector.
            for (const auto& valor : valores) { //Lo mismo que para mazzos
                int puntos = 0;
                if (valor == "A") {
                    puntos = 11;
                } else if (valor == "J" || valor == "Q" || valor == "K") {
                    puntos = 10;
                } else {
                    puntos = std::stoi(valor);
                }

                Carta nuevaCarta(palo, valor, puntos);
                mazo.push_back(nuevaCarta);
            }
        }
    }
    }
}//No se si debería crear manualmente cada pareja ordenada de los datos de la clase carta o hacerlo automáticamente, revisar cuantos mazos se usan en el juego, es necesario que nuestro mazo sea como un mazo original o podemos hacer que nuestro mazo ya sea la suma de los ocho mazos que se usan en el juego. sino tendríamos que hacer que el mazo se llene con 52 cartas y luego se repita el proceso 7 veces más.
//Retorna la carta que se encuentra en la última posición del mazo, se debe usar para repartir las cartas a los jugadores y al crupier, y para dar cartas adicionales a los jugadores cuando las pidan.
Carta Mazo::darCarta(){
    if (mazo.empty()) {
          cout<<"No quedan cartas en el mazo";
      }
    Carta cartaDada = mazo.back();
     mazo.pop_back();
    return cartaDada; 
}
void Mazo::mezclarMazo(){
  //Esta funcion debe mezclar el mazo de objetos Carta de manera aleatoria, investiar como hacerlo, se debe ejecutar este método por el crupier o el administrador antes de iniciar cada partida, y sobre todo antes de usar el metodo darCarta() en la primera repartición.
}
void Mazo::primeraReparticion(Jugador jugador, Crupier* crupier){ //((((OJO: ALGO ASÏ PERO POR PUNTEROS PORQUE NO PUEDO MENCIONAR A crupier.h)))
    Carta cartaJugador1 = darCarta();  // Primera carta para el jugador
    jugador.recibirCarta(cartaJugador1);  // El jugador recibe la primera carta

    Carta cartaCrupier1 = darCarta();  // Primera carta para el crupier
    crupier->recibirCarta(cartaCrupier1);  // El crupier recibe la carta

    Carta cartaJugador2 = darCarta();  // Segunda carta para el jugador
    jugador.recibirCarta(cartaJugador2);  // El jugador recibe la segunda carta

    Carta cartaCrupier2 = darCarta();  // Segunda carta para el crupier
    crupier->recibirCarta(cartaCrupier2); 
  //Esta función se encarga de repartir las cartas iniciales a los jugadores recorriendo el (vector<Jugador> jugadores) definido en Administrador,
    
    //(Si se logra que sean varios) y al crupier. sino solo se le da al jugador y al crupier. Definitivamente es mas complejo con varios
    //jugadores.
    //Debe usar la funcion darCarta() para obtener las cartas del mazo y asignarlas al vector manoJugador y manoCrupier.
    //Debe repartir 2 cartas a cada jugador y 2 cartas al crupier. Esto se puede hacer con el método del jugador llamado recibirCarta()*/
}