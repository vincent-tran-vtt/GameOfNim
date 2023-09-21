/**
 * @brief This cpp file handles the mode of the game
 * There is 1 private member variable that each have its own setter and getter.
 * Int mode for storing the mode of the game
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug none
*/

#include "Mode.h"
#include <cstdlib>

using namespace std;

/**
 * @brief default constructor.
 * Private int mode set to 0.
*/
Mode::Mode(){
    mode = 0;
}

/**
 * @brief destructor.
*/
Mode::~Mode(){

}

/**
 * @brief getter for private int mode.
*/
int Mode::GetMode(){
    return mode;
}

/**
 * @brief setter for private int mode.
*/
void Mode::SetMode(int mmode){
    mode = mmode;
}

/**
 * @brief sets private int mode to random integer from 0 to 1.
*/
void Mode::SetMode(){
    mode = rand() % 2;
}