/*
Player's moves
*/

#include "Player.h"

#include <iostream>

using namespace std;

Player::Player(){ //dafault constructor

}

Player::~Player(){ //destructor

}

//getters
string Player::GetUsername(){
    return username;
}

//setters
void Player::SetUsername(string musername){
    username = musername;
}

//player move
int Player::PlayerMove(){
    //declared variable
    int remove;

    cin >> remove;

    return remove;
}