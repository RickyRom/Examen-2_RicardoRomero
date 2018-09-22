#ifndef OBSTACULO_H
#define OBSTACULO_H

#include <string>
#include "Item.h"
using namespace std;

class Obstaculo:public Item {
    private:

    public:
        Obstaculo();
        ~Obstaculo();

        virtual string toString();
};
#endif