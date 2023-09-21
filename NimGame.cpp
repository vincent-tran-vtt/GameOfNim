/**
 * @brief This header file handles the moves from the computer and player
 * There are 9 private member variables that each have its own setters and getters.
 * Int pile for storing the pile size.
 * Int CanRemove for storing how much a computer can remove.
 * Int mode for storing if computer is in normal or advanced mode.
 * int FirstTurn for storing who goes first.
 * Int turn for storing who's turn it is.
 * Int removeFromPile for storing how much is removed from pile.
 * Int comp stores if the second player is the computer or another human.
 * String username stores username of player.
 * Mode class definition Rmode.
 * Player class definition R1Player.
 * Player class definition R2PLayer.
 * Computer cass definition RComputer.
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug none
*/

#include "NimGame.h"
#include "PlayByPlay.h"

#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

/**
 * @brief default constructor.
 * Private int remove set to 0.
 * Private int pile set to 0.
 * Private int mode set to 0.
*/
NimGame::NimGame(){
    pile = 0;
    CanRemove = 0;
    mode = 0;
    FirstTurn = 0;
    removeFromPile = 0;
}

/**
 * @brief overload constructor.
 * Private int pile is set to parameter mpile.
 * Private int CanRemove is set to parameter mCanRemove.
 * Private int mode is set to parameter mmode.
 * Private int FirstTurn is set to parameter mFirstTurn.
 * @param pile a int argument.
 * @param CanRemove a int argument.
 * @param mmode a int argument.
 * @param FirstTurn a int argument.
*/
NimGame::NimGame(int mpile, int mCanRemove, int mmode, int mFirstTurn){
    pile = mpile;
    CanRemove = mCanRemove;
    mode = mmode;
    FirstTurn = mFirstTurn;
}


/**
 * @brief destructor.
*/
NimGame::~NimGame(){

}

/**
 * @brief getter for private int pile.
*/
int NimGame::GetPile(){
    return pile;
}


/**
 * @brief getter for private int mode.
*/
int NimGame::GetMode(){
    return mode;
}

/**
 * @brief getter for private int FirstTurn.
*/
int NimGame::GetFirstTurn(){
    return FirstTurn;
}

/**
 * @brief getter for private int CanRemove.
*/
int NimGame::GetCanRemove(){
    return CanRemove;
}

/**
 * @brief getter for private int turn.
*/
int NimGame::GetTurn(){
    return turn;
}

/**
 * @brief getter for private int comp.
*/
int NimGame::GetComp(){
    return comp;
}

/**
 * @brief getter for private int username.
*/
string NimGame::GetUsername(){
    return username;
}

/**
 * @brief getter for private bool win.
*/
bool NimGame::GetWin(){
    return win;
}

/**
 * @brief setter for private int mode.
*/
void NimGame::SetMode(int mmode){
    mode = mmode;
}

/**
 * @brief setter for private int pile.
*/
void NimGame::SetPile(int mpile){
    pile = mpile;
}

/**
 * @brief setter for private int mFirstTurn.
*/
void NimGame::SetFirstTurn(int mFirstTurn){
    FirstTurn = mFirstTurn;
}

/**
 * @brief setter for private int CanRemove.
*/
void NimGame::SetCanRemove(int mCanRemove){
    CanRemove = mCanRemove;
}

/**
 * @brief setter for private int turn.
*/
void NimGame::SetTurn(int mturn){
    turn = mturn;
}

/**
 * @brief setter for private int comp.
*/
void NimGame::SetComp(int mcomp){
    comp = mcomp;
}

/**
 * @brief setter for private int username.
*/
void NimGame::SetUsername(string musername){
    username = musername;
}

/**
 * @brief setter for private bool win.
*/
void NimGame::SetWin(bool mwin){
    win = mwin;
}

/**
 * @brief removes pile based on computer's or player's turn
 * Sets private int CanRemove.
 * Sets private int removeFromPile to the amount the computer or player removes.
 * If removeFromPile is more than 0 and less than or equal to CanRemove,
 * pile is subracted from removeFromPile.
 * If private int removeFromPile is out of range,
 * direct recursion goes back to function RemoveFromPile.
 * @return void
*/
void NimGame::RemoveFromPile(){
    Plays.TextFileTurn(turn, comp, username);
    if(turn == 0){
        if(comp == 1){
            cout << "Guest's Turn:" << endl;
        }
        else{
            cout << "Computer's Turn" << endl;
        }
    }
    else{
        cout << username << "s Turn:" << endl;
    }

    SetCanRemove();

    cout << "Max Value To Remove From Pile " << to_string(CanRemove) << endl;
    Plays.TextFileMax(CanRemove);

    if(turn == 0){
        if(comp == 2){
            RComputer.SetCanRemove(CanRemove);
            removeFromPile = RComputer.ComputerAI();
        }
        else{
            removeFromPile = R2Player.PlayerMove();
        }
    }
    else{
        removeFromPile = R1Player.PlayerMove();
    }

    if((removeFromPile <= CanRemove) & (removeFromPile > 0)){
        pile -= removeFromPile;
    }
    else{
        cout << "Error: Out Of Range" << endl;
        Plays.TextFileOutOfRange();
        RemoveFromPile();
    }
}

/**
 * @brief sets private int mode from function GetMode in Mode class definition RMode.
 * @return void
*/
void NimGame::RandomMode(){
    RMode.SetMode();
    mode = RMode.GetMode();
    RComputer.SetMode(mode);
    Plays.TextFileMode(mode);
    if(mode == 0){
        cout << "Normal Mode" << endl;
    }
    else{
        cout << "Advanced Mode" << endl;
    }
}

/**
 * @brief sets private int FirstTurn to random integer between 0 and 1.
 * @return void
*/
void NimGame::RandomFirstTurn(){
    FirstTurn = rand() % 2;
    turn = FirstTurn;
    Plays.TextFileFirstTurn(FirstTurn, comp, username);
    if(FirstTurn == 0){
        if(comp == 2){
            cout << "Computer Goes First" << endl;
        }
        else{
            cout << "Guest Goes First" << endl;
        }
    }
    else{
        cout << username << " Goes First" << endl;
    }
}
/**
 * @brief sets private int CanRemove to 1 if pile is 1, otherwise pile divided by 2
 * @return void
*/
void NimGame::SetCanRemove(){
    if(pile == 1){
        CanRemove = 1;
    }
    else{
        CanRemove = pile / 2;
    }
}

/**
 * @brief sets private int pile randomly from 10 to 1000.
 * @return void
*/
void NimGame::RandomPile(){
    pile = rand() % 1000 + 10;
    RComputer.SetPile(pile);
    Plays.TextFileSPile(pile);
    cout << "Starting Pile: " << pile << endl;
}

/**
 * @brief game initiation
 * Displays menu and selects option for playing against human or computer.
 * Initalize random integer.
 * Calls function RandomPile.
 * Calls function RandomFirstTurn.
 * Calls function RandomMode if comp is equal to 2.
 * @return void
*/
void NimGame::GameInit(){
    cout << "Play Against Human Or Computer" << endl;
    cout << "1. Human" << endl;
    cout << "2. Computer" << endl;
    cin >> comp;
    srand(time(NULL));
    RandomPile();
    RandomFirstTurn();
    if(comp == 2){
        RandomMode();
    }
}

/**
 * @brief game match
 * When pile is not 0, functions RemoveFromPile and DisplayRemovePile are called.
 * @return void
*/
void NimGame::GameMatch(){
    while(pile != 0){
        RemoveFromPile();
        DisplayRemovePile();
    }
    Plays.TextFileMatch(turn, comp, username);
    if(turn == 0){
        win = false;
        if(comp == 2){
            cout << "COMPUTER WINS!" << endl;
        }
        else{
            cout << "Guest WINS!" << endl;
        }
    }
    else{
        cout << username << " WINS!" << endl;
        win = true;
    }
}

/**
 * @brief displays who and how many is removed from pile
 * @return void
*/
void NimGame::DisplayRemovePile(){
    Plays.TextFileRemoved(turn, comp, removeFromPile, pile, username);
    if(turn == 0){
        if(comp == 2){
            cout << "Computer Removes " << to_string(removeFromPile) << " marbles" << ". Remaining Marbles: " << to_string(pile) << endl;
            RComputer.SetPile(pile);
        }
        else{
            cout << "Guest Removes " << to_string(removeFromPile) << " marbles" << ". Remaining Marbles: " << to_string(pile) << endl;
        }
        turn = 1;
    }
    else{
        cout << username << " Removes " << to_string(removeFromPile) << " marbles" << ". Remaining Marbles " << to_string(pile) << endl;
        if(comp == 2){
            RComputer.SetPile(pile);
        }
        turn = 0;
    }
}