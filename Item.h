#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;


class Item {
    private:

    public:
        Item();
        ~Item();

        virtual string toString();

};
#endif