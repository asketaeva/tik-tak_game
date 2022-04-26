//
// Created by 77775 on 26.10.2021.
//
//implementation of TicTacToe
//Using classes this time

#include "Environment.h"

int main() {

    bool play = false;
    Player p;
    Environment en;

    play = p.ChooseOption();

    while (play == true) {

        char playerChoose = 'w';
        char BoardArray[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        char player = 'X';

        while (playerChoose == 'w') {

            en.drawBoard(BoardArray);
            en.Move(BoardArray, player);
            playerChoose = en.CheckingValue(BoardArray, player);

            if (playerChoose == 'w') {
                player = p.togglePlayer(player);
            }

        }
        en.drawBoard(BoardArray);
        play = p.ChooseOption();

    }
}