#ifndef _HUMAN_H
#define _HUMAN_H

#include <iostream>
#include <string>
#include "Player.h"

using namespace std; 

class Human: public Player
{
public:
    Human();
    Human(string n);
    char makeMove();
    string getName();
};
#endif
