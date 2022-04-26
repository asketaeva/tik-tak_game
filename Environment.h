//
// Created by 77775 on 26.10.2021.
//

#ifndef UNTITLED9_ENVIRONMENT_H
#define UNTITLED9_ENVIRONMENT_H
#include "Player.h"

class Environment {
private:
    string playerName;
public:
    void drawBoard(char board[]);
    void Move(char board[], char player);
    void MoveBot(char board[], char bot);
    char CheckingValue(char board[], char player);

};


#endif //UNTITLED9_ENVIRONMENT_H
