#include "Jugador.h"
#include "Item.h"
#include <string>

using namespace std;

Jugador::Jugador() {

}

Jugador::Jugador(string pnombre, string pestado, string pcontro): Item() {
    nombre = pnombre;
    estado = pestado;
    controlador = pcontro;
}

Jugador::~Jugador() {

}

//getters
string Jugador::getNombre() {
    return nombre;
}

string Jugador::getEstado() {
    return estado;
}

string Jugador::getControlador() {
    return controlador;
}

//setters
void Jugador::setNombre(string nom) {
    nombre = nom;
}

void Jugador::setEstado(string estad) {
    estado = estad;
}

void Jugador::setControlador(string contro) {
    controlador = contro;
}

string Jugador::toString() {
    return "J";
}