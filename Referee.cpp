#include <iostream>
#include <string>
#include "Player.h"
#include "Referee.h"

using namespace std;

Referee::Referee(){};

Player * Referee::refGame(Player * player1, Player * player2){
    switch (player1->makeMove()){
        case 'R':
            switch (player2->makeMove()){
                case 'R':
                    return nullptr;
                case 'P':
                    return player2;
                case 'S':
                    return player1;
            }
        case 'P':
            switch (player2->makeMove()){
                case 'P':
                    return nullptr;
                case 'S':
                    return player2;
                case 'R':
                    return player1;
            }
        case 'S':
            switch (player2->makeMove()){
                case 'S':
                    return nullptr;
                case 'R':
                    return player2;
                case 'P':
                    return player1;
            }
    }
}
//Player.h Player.cpp Computer.h Computer.cpp Human.h Human.cpp