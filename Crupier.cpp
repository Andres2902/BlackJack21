#include"Crupier.h"

using namespace std;
Crupier::Crupier(/*Mazo _mazoJuego, */vector<Carta> _manoCrupier){
   // mazoJuego = _mazoJuego;
    manoCrupier = _manoCrupier;
}
void Crupier::recibirCarta(Carta recibirCarta){
     manoCrupier.push_back(recibirCarta);
}

void Crupier::repartirCarta(){ //Este metodo debe usar el metodo darCarta() de la clase Mazo y unirse con el metodo recibirCarta() de la clase jugador para que el jugador reciba la carta que el crupier le da. se puede quitar este metodo y que esos dos metodos se relacionen solos.
}
void Crupier::ofrecerCartas(){ //Esta funcion (metodo) es solo para ofrecer cartas al jugador en la consola (cout<<"Desea pedir otra carta?"), y usar una bandera que determine si usar repartirCarta() o no. se puede quitar y hacerlo desde el main.
}
void mostarManoParcial(){
}
void mostrarManoCompleta(){
}
void nuevoJuego(){
}
void decirGanadores(){
}
void mezclarMazo(){
}

//Esta funcion es solo para dar las cartas que los jugadores piden, no para la primera reparticion que ya la hace
