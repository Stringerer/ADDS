#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"

using namespace std;

Human::Human(){
    name = "Human";
};

Human::Human(string n){
    name = n;
};
char Human::makeMove(){
    cout << "Enter Move: ";
    cin >> move;
    return move;
}
string Human::getName(){
    return name;
}