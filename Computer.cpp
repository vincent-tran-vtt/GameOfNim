/**
 * @brief This cpp file handles the computer's moves.
 * There are 5 private member variables that each have its own setters and getters.
 * Int remove for storing how much to remove from pile.
 * Int pile for storing the pile size.
 * Int mode for storing if computer is in normal or advanced mode.
 * Int CanRemove for storing how much a computer can remove.
 * Int target for storing the pile size wanted.
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug may infinitely loop, reason unknown
*/

#include "Computer.h"

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


/**
 * @brief default constructor.
 * Private int remove set to 0.
 * Private int pile set to 0.
 * Private int mode set to 0.
*/
Computer::Computer(){
    remove = 0;
    pile = 0;
    mode = 0;
}

/**
 * @brief overload constructor.
 * Private int remove set to parameter mremove.
 * Private int pile set to parameter mpile.
 * Private int pile set to parameter mmode.
 * @param remove a int argument
 * @param pile a int argument
 * @param mode an int argument
*/
Computer::Computer(int mremove, int mpile, int mmode){
    remove = mremove;
    pile = mpile;
    mode = mmode;
}

/**
 * @brief destructor.
*/
Computer::~Computer(){

}

/**
 * @brief getter for private int remove.
*/
int Computer::GetRemove(){
    return remove;
}

/**
 * @brief getter for private int pile.
*/
int Computer::GetPile(){
    return pile;
}

/**
 * @brief getter for private int mode.
*/
int Computer::GetMode(){
    return mode;
}

/**
 * @brief getter for private int CanRemove.
*/
int Computer::GetCanRemove(){
    return CanRemove;
}

/**
 * @brief getter for private int target.
*/
int Computer::GetTarget(){
    return target;
}

/**
 * @brief setter for private int remove;
*/
void Computer::SetRemove(int mremove){
    remove = mremove;
}


/**
 * @brief setter for private int pile.
*/
void Computer::SetPile(int mpile){
    pile = mpile;
}

/**
 * @brief setter for private int mode.
*/
void Computer::SetMode(int mmode){
    mode = mmode;
}

/**
 * @brief setter for private int CanRemove.
*/
void Computer::SetCanRemove(int mCanRemove){
    CanRemove = mCanRemove;
}

/**
 * @brief setter for private int target.
*/
void Computer::SetTarget(int mtarget){
    target = mtarget;
}

/**
 * @brief calls ComputerNormal or ComptuerAdvanced based on mode and returns remove
 * @return int
*/
int Computer::ComputerAI(){
    if(mode == 0){
        ComputerNormal();
    }
    else{
        ComputerAdvanced();
    }

    return remove;
}

/**
 * @brief sets private int remove to random integer from 1 to private int CanRemove
 * @return int
*/
void Computer::ComputerNormal(){
    remove = rand() % CanRemove + 1;
}

/**
 * @brief advanced mode
 * If private int pile is equivalent to private int target,
 * private int remove is set to a random integer from 1 to CanRemove.
 * Otherwise private int remove is set to target.
 * @return void
*/
void Computer::ComputerAdvanced(){
    TargetNumber();
    if(pile == target){
        remove = rand() % CanRemove + 1;
    }
    else{
        remove = target;
    }
}

/**
 * @brief advanced mode algorithm
 * temp is set to (2^n) - 1 that is less than the pile size.
 * target is set to a number to subract from the pile to make pile equal to temp
 * @return int
*/
void Computer::TargetNumber(){
    int n = 0;  /**< a int n. Set to 0. */
    int temp = 0;  /**< a int temp. Set to 0. */

    while(temp <= pile){
        if(temp <= pile){
            target = pile - temp;
        }
        temp = pow(2, n) - 1;
        n += 1;
    }
}