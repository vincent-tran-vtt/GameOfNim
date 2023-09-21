/*
Player's moves
*/

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    private:
        std::string username;
    public:
        Player(); //default constructor
        ~Player(); //destructor

        //getters
        std::string GetUsername();

        //setters
        void SetUsername(std::string username);

        //Player moves
        int PlayerMove();
    
};

#endif