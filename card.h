#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;

class card{
    protected:
    
    int value;
    char suit;
    
    public:
    
    int getValue();
    card(int, char);
    void render();
};

#endif