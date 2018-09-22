#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include "Item.h"

using namespace std;

class Jugador: public Item{
    private:
        string nombre;
        string estado;
        string controlador;

    public:
        Jugador(string);
        Jugador(string,string,string);
        ~Jugador();

        //getters
        string getNombre();
        string getEstado();
        string getControlador();

        //setters
        void setNombre(string);
        void setEstado(string);
        void setControlador(string);

        virtual string toString();

};
#endif
