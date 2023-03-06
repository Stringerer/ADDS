#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"

using namespace std;

Computer::Computer(){
    name = "Computer";
    move = 'R';
}

char Computer::makeMove(){
    return move;
}

string Computer::getName(){
    return name;
}