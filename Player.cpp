#include "Player.h"


bool Player::ChooseOption()
{

    char response;
    bool play = false;

        cout << "To start the game press 1 " <<endl;
        cin >> response;

        if(response == '1'){
            play = true;
        }
        else if(response =='2'){
            play=false;
        }
        else cout << "Try press 1!\n";
        return play;
}

char Player::togglePlayer(char player){
    player = player == 'X' ? 'O':'X';
    return player;
}

