/**
 * @brief This header file handles outputing logs to a text file.
 * There is 1 private member variable.
 * Ofstream outfile stores texts of game logs.
 * @author Vincent Tran and Alex Roldan
 * @version 1.0.0
 * @date 5/11/23
 * @bug none
*/

#include "PlayByPlay.h"

#include <fstream>

using namespace std;


/**
 * @brief default constructor.
 * Text file is opened
*/
PlayByPlay::PlayByPlay(){
    outfile.open("PlayByPlay.txt");
}

/**
 * @brief destructor.
*/
PlayByPlay::~PlayByPlay(){

}


/**
 * @brief outputs mode on textfile.
 * @param mmode a int argument
 * @return void
*/
void PlayByPlay::TextFileMode(int mmode){
    if(mmode == 0){
        outfile << "Normal Mode" << endl;
    }
    else{
        outfile << "Advanced Mode" << endl;
    }
}

/**
 * @brief outputs CanRemove on textfile.
 * @param mCanRemove int argument
 * @return void
*/
void PlayByPlay::TextFileMax(int mCanRemove){
    outfile << "Max Value To Remove From Pile " << to_string(mCanRemove) << endl;
}

/**
 * @brief outputs error for out of range.
 * @return void
*/
void PlayByPlay::TextFileOutOfRange(){
    outfile << "Error: Out Of Range" << endl;
}

/**
 * @brief outputs turn on text file.
 * @param mturn int argument
 * @param mcomp int argument
 * @param musername string argument
 * @return void
*/
void PlayByPlay::TextFileTurn(int mturn, int mcomp, string musername){
    if(mturn == 0){
        if(mcomp == 1){
            outfile << "Guest's Turn:" << endl;
        }
        else{
            outfile << "Computer's Turn" << endl;
        }
    }
    else{
        outfile << musername << "s Turn:" << endl;
    }
}

/**
 * @brief outputs first turn on text file.
 * @param mturn int argument
 * @param mcomp int argument
 * @param musername string argument
 * @return void
*/
void PlayByPlay::TextFileFirstTurn(int mturn, int mcomp, string musername){
    if(mturn == 0){
        if(mcomp == 2){
            outfile << "Computer Goes First" << endl;
        }
        else{
            outfile << "Guest Goes First" << endl;
        }
    }
    else{
        outfile << musername << " Goes First" << endl;
    }
}

/**
 * @brief outputs starting pile size on text file.
 * @param mspile int argument
 * @return void
*/
void PlayByPlay::TextFileSPile(int mspile){
    outfile << "Starting Pile: " << mspile << endl;    
}

/**
 * @brief outputs amount removed on text file.
 * @param mturn int argument
 * @param mcomp int argument
 * @param mremoveFromPile int argument
 * @param mpile int argument
 * @param musername string argument
 * @return void
*/
void PlayByPlay::TextFileRemoved(int mturn, int mcomp, int mremoveFromPile, int mpile, string musername){
    if(mturn == 0){
        if(mcomp == 2){
            outfile << "Computer Removes " << to_string(mremoveFromPile) << " marbles" << ". Remaining Marbles: " << to_string(mpile) << endl;
        }
        else{
            outfile << "Guest Removes " << to_string(mremoveFromPile) << " marbles" << ". Remaining Marbles: " << to_string(mpile) << endl;
        }
    }
    else{
        outfile << musername << " Removes " << to_string(mremoveFromPile) << " marbles" << ". Remaining Marbles " << to_string(mpile) << endl;
    }
}

/**
 * @brief outputs winner on text file.
 * @param mturn int argument
 * @param mcomp int argument
 * @param musername string argument
 * @return void
*/
void PlayByPlay::TextFileMatch(int mturn, int mcomp, string musername){
    if(mturn == 0){
        if(mcomp == 2){
            outfile << "COMPUTER WINS!" << endl;
        }
        else{
            outfile << "Guest WINS!" << endl;
        }
    }
    else{
        outfile << musername << " WINS!" << endl;
    }
    outfile.close();
}