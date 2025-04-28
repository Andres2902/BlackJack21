#include<string>
#include"Carta.h"
#include<iostream>
using namespace std;

Carta::Carta(string _valor, string _palo){
    valor = _valor;
    palo = _palo;
}
string Carta::getValor(){
  return valor;
}
void Carta::mostrarCarta()const{ //Esta función debe mostrar la carta en la consola, se debe usar siempre que se use la funcion darCarta(), excepto en una de las cartas que se le da a crupier, ya que es oculta. Al ir finalizando la ronda el curpier debe hacer uso de esta función para mostrar la carta que le falta.
    cout<<palo<<endl;
    cout<<valor; //No se si mostrarlo así directamente o con texto introductorio, si el juego es en la consola se muestra así, también depende de si hacemos la opción de hacer la interfaz gráfica.
}
// void Carta::nuevaCarta(){}
