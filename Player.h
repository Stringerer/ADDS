#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player
{
protected:
    string name;
    char move;

public:
    Player();
    virtual char makeMove() = 0;
    virtual string getName() = 0;
};
#endif 