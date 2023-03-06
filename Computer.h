#ifndef _COMPUTER_H
#define _COMPUTER_H

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Computer: public Player{
public:
    Computer();
    char makeMove();
    string getName();
};
#endif