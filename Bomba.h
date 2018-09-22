#ifndef BOMBA_H
#define BOMBA_H

#include "Item.h"
#include <string>
using namespace std;

class Bomba: public Item {
    private:
        int numero;

    public:
        Bomba();
        Bomba(int);
        ~Bomba();

        int getNumero();
        void setNumero(int);

        virtual string toString();
};
#endif