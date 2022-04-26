//
// Created by 77775 on 26.10.2021.
//

#include "Environment.h"

void Environment::drawBoard(char board[]){

    cout  << board[0] << " | " << board[1] << " | " << board[2] <<endl;
    cout << "----------" <<endl;
    cout  << board[3] << " | " << board[4] << " | "<< board[5] <<endl;
    cout << "----------" <<endl;
    cout  << board[6] << " | " << board[7] <<" | "<< board[8] <<endl;
}

/*void Environment::MoveBot(char board[], char player){
    bool nextMove = false;
    char move;

    if(player == 'X'){ playerName = "Bot"; }
    else  playerName = "Anel";
    cout<<"Next "<< playerName<<":"<< endl;

    while(nextMove == false) {

        int number = (int)( 1+rand()%9);
        char random = (char)number + '0';
        cout<<random<<endl;
        for (int x = 0; x < 9; x++) {
            move = random;
            if (move == board[x] && move != 'X' && move != 'O') {
                board[x] = player;
                nextMove = true;
            }
        }
        if (nextMove == false) {
            cout << "Choose another one" << endl;
        }
break;
    }
}*/

void Environment::Move(char board[], char player){
    bool nextMove = false;
    char move;

    if(player == 'X'){playerName = "Bot";}
    else playerName = "Anel";

    cout<<"Next "<< playerName<< endl;

    while(nextMove == false) {

        int number = (int)( 1+rand()%9);
        char random = (char)number + '0';
        if(playerName =="Bot"){
            move = random;
            cout<<move<<endl;}
        else cin>>move;
        for (int x = 0; x < 9; x++) {
                    if (move == board[x] && move != 'x' && move != 'o') {
                        board[x] = player;
                        nextMove = true;
                    }
                }
                if (nextMove == false) {
                    cout << "Choose another one" << endl;
                }
break;
    }
}

char Environment::CheckingValue(char board[], char player)
{
    char playerChoose = 'w';
    int skipValue = 0;

    if(board[0] == board[1] && board[1] == board[2]){playerChoose = player;}
    else if(board[0] == board[3] && board[3] == board[6]){playerChoose = player;}
    else if(board[0] == board[4] && board[4] == board[8]){playerChoose = player;}
    else if(board[1] == board[4] && board[4] == board[7]){playerChoose = player;}
    else if(board[2] == board[4] && board[4] == board[6]){playerChoose = player;}
    else if(board[2] == board[5] && board[5] == board[8]){playerChoose = player;}
    else if(board[3] == board[4] && board[4] == board[5]){playerChoose = player;}
    else if(board[6] == board[7] && board[7] == board[8]){playerChoose = player;}
    else{ for(int x = 0; x < 9; x++){
            if(board[x] == 'x' || board[x] == 'o'){
                skipValue++;
            }
        }
        if(skipValue == 9){playerChoose = 't'; }
    }

    if(playerChoose == player){
        if(player == 'X'){
            cout<<"Congratulation " <<playerName<<" winner!" <<endl;
        }
        else cout<<"Congratulation " <<playerName<<" winner!" << endl;
    }
    else if(playerChoose == 't'){
        cout << "Try again" <<endl;
    }

    return playerChoose;

}



