#include "Item.h"
#include "Bomba.h"
#include <string>

using namespace std;

Bomba::Bomba() {

}

Bomba::Bomba(int pnum): Item() {
    numero = pnum;
}

Bomba::~Bomba() {

}

int Bomba::getNumero() {
    return numero;
}

void Bomba::setNumero(int pnum) {
    numero = pnum;
}

string Bomba::toString() {
    return "B";
}