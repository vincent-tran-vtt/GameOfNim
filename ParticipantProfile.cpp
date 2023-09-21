/**
 * @brief This header file handles storing stats to profile of user.
 * There are 10 private member variables that each have its own setters and getters.
 * String username for storing username
 * Int TotalGamesPlayed for storing total games played.
 * Int TotalGamesPlayedAgainstComputer for storing total games played against computer.
 * Int TotalGamesWon for storing total games won overall.
 * Int TotalGamesWonAgainstHuman for storing total games won against humans.
 * Int TotalGamesAgainstComputer for storing games won against computers.
 * double OverallWinningPercentage for storing winning percentage overlal.
 * double WinningPercentageAgainstHuman for storing winning percentage against human.
 * double WinnningPercentageAgainstComputer for storing winning percentage against computer.
 * @author Vincent Tran and Alex Roldan
 * @version 1.0.0
 * @date 5/11/23
 * @bug none
*/

#include "ParticipantProfile.h"

using namespace std;

#include <string>

/**
 * @brief ParticipantProfile default constructor.
 * Private int TotalGamesPlayed set to 0.
 * Private int TotalGamesPlayedAgainstHuman set to 0.
 * Private int TotalGamesPlayedAgainstComputer set to 0.
 * Private int TotalGamesWon set to 0.
 * Private int TotalGamesWonAgainstHuman set to 0.
 * Private int TotalGamesWonAgaintComputer set to 0.
 * Private double OverallWinningPercentage set to 0.
 * Private double WinningPercentageAgainstHuman set to 0.
 * WinningPercentageAgainstComputer set to 0.
*/
ParticipantProfile::ParticipantProfile(){
    TotalGamesPlayed = 0;
    TotalGamesPlayedAgainstHuman = 0;
    TotalGamesPlayedAgainstComputer = 0;
    TotalGamesWon = 0;
    TotalGamesWonAgainstHuman = 0;
    TotalGamesWonAgainstComputer = 0;
    OverallWinningPercentage = 0;
    WinningPercentageAgainstHuman = 0;
    WinningPercentageAgainstComputer = 0;
}

/**
 * @brief ParticipantProfile overload constructor
*/
ParticipantProfile::ParticipantProfile(string mUsername, int mTotalGamesPlayed,
int mTotalGamesPlayedAgainstHuman, int mTotalGamesPlayedAgainstComputer,
int mTotalWins, int mTotalGamesWonAgainstHuman, int mTotalGamesWonAgainstComputer,
double mOverallWinPercent, double mWinningPercentageAgainstHuman, 
double mWinningPercentageAgainstComputer){
    username = mUsername;
    TotalGamesPlayed = mTotalGamesPlayed;
    TotalGamesPlayedAgainstHuman = mTotalGamesPlayedAgainstHuman;
    TotalGamesPlayedAgainstComputer = mTotalGamesPlayedAgainstComputer;
    TotalGamesWon = mTotalWins;
    TotalGamesWonAgainstHuman = mTotalGamesWonAgainstHuman;
    TotalGamesWonAgainstComputer = mTotalGamesWonAgainstComputer;
    OverallWinningPercentage = mOverallWinPercent;
    WinningPercentageAgainstHuman = mWinningPercentageAgainstHuman;
    WinningPercentageAgainstComputer = mWinningPercentageAgainstComputer;
}

/**
 * @brief ParticipantProfile destructor
*/
ParticipantProfile::~ParticipantProfile(){

}

/**
 * @brief getter for private string username.
*/
string ParticipantProfile::getUsername(){
    return username;
}

/**
 * @brief getter for private int TotalGamesPlayed.
*/
int ParticipantProfile::getTotalGamesPlayed(){
    return TotalGamesPlayed;
}

/**
 * @brief getter for private int TotalGamesPlayedAgainstHuman.
*/
int ParticipantProfile::getHumanGamesPlayed(){
    return TotalGamesPlayedAgainstHuman;
}

/**
 * @brief getter for private int TotalGamesPlayedAgainstComputer.
*/
int ParticipantProfile::getCompGamesPlayed(){
    return TotalGamesPlayedAgainstComputer;
}

/**
 * @brief getter for private int TotalGamesWon.
*/
int ParticipantProfile::getWins(){
    return TotalGamesWon;
}

/**
 * @brief getter for private int TotalGamesWonAgainstHuman.
*/
int ParticipantProfile::getWinsAgainstHuman(){
    return TotalGamesWonAgainstHuman;
}

/**
 * @brief getter for private int TotalGamesWonAgainstComputer.
*/
int ParticipantProfile::getWinsAgainstComp(){
    return TotalGamesWonAgainstComputer;
}

/**
 * @brief getter for private double OverallWinningPercentage.
*/
double ParticipantProfile::getWinPercent(){
    return OverallWinningPercentage;
}

/**
 * @brief getter for private double WinningPercentageAgainstHuman.
*/
double ParticipantProfile::getHumanWinPercent(){
    return WinningPercentageAgainstHuman;
}

/**
 * @brief getter for private double WinningPercentageAgainstComputer.
*/
double ParticipantProfile::getCompWinPercent(){
    return WinningPercentageAgainstComputer;
}

/**
 * @brief setter for private string username.
*/
void ParticipantProfile::setUsername(string name){
    username = name;
}

/**
 * @brief setter for private int TotalGamesPlayed.
*/
void ParticipantProfile::setTotalGamesPlayed(int played){
    TotalGamesPlayed = played;
}

/**
 * @brief setter for private int TotalGamesPlayedAgainstHuman.
*/
void ParticipantProfile::setHumanGamesPlayed(int hPlayed){
    TotalGamesPlayedAgainstHuman = hPlayed;
}

/**
 * @brief setter for private int TotalGamesPlayedAgainstComputer.
*/
void ParticipantProfile::setCompGamesPlayed(int cPlayed){
    TotalGamesPlayedAgainstComputer = cPlayed;
}

/**
 * @brief setter for private int TotalGamesWonAgainstHuman.
*/
void ParticipantProfile::setWinsAgainstHuman(int hWin){
    TotalGamesWonAgainstHuman = hWin;
}

/**
 * @brief setter for private int TotalGamesWon.
*/
void ParticipantProfile::setWins(int wins){
    TotalGamesWon = wins;
}

/**
 * @brief setter for private int TotalGamesWonAgainstComputer.
*/
void ParticipantProfile::setWinsAgainstComp(int cWin){
    TotalGamesWonAgainstComputer = cWin;
}

/**
 * @brief setter for private double OverallWinningPercentage.
*/
void ParticipantProfile::setWinPercent(double wPercent){
    OverallWinningPercentage =  wPercent;
}

/**
 * @brief setter for private double WinningPercentageAgainstHuman.
*/
void ParticipantProfile::setHumanWinPercent(double hWinPercent){
    WinningPercentageAgainstHuman = hWinPercent;
}

/**
 * @brief setter for private double WinningPercentageAgainstComputer.
*/
void ParticipantProfile::setCompWinPercent(double cWinPercent){
    WinningPercentageAgainstComputer = cWinPercent;
}

/**
 * @brief sets and calculates OverallWinningpercentage
 * @return void
*/
void ParticipantProfile::WinPercentage(){
    OverallWinningPercentage = (static_cast<double>(TotalGamesWon) / static_cast<double>(TotalGamesPlayed)) * 100;
}

/**
 * @brief sets and calculates WinningPercentageAgainstHuman
 * @return void
*/
void ParticipantProfile::WinPercentageHuman(){
    WinningPercentageAgainstHuman = (static_cast<double>(TotalGamesWonAgainstHuman) / static_cast<double>(TotalGamesPlayedAgainstHuman)) * 100;
}

/**
 * @brief sets and calculates WinningPercentageAgainstComputer
 * @return void
*/
void ParticipantProfile::WinPercentageComp(){
    WinningPercentageAgainstComputer = (static_cast<double>(TotalGamesWonAgainstComputer) / static_cast<double>(TotalGamesPlayedAgainstComputer)) * 100;
}

/**
 * @brief sets and increases TotalGamesPlayed
 * @return void
*/
void ParticipantProfile::IncrTotalGamesPlayed(){
    TotalGamesPlayed += 1;
}

/**
 * @brief sets and increases TotalGamesPlayedAgainstHuman
 * @return void
*/
void ParticipantProfile::IncrHumanGamesPlayed(){
    TotalGamesPlayedAgainstHuman += 1;
}

/**
 * @brief sets and increases TotalGamesPlayedAgainstComputer
 * @return void
*/
void ParticipantProfile::IncrCompGamesPlayed(){
    TotalGamesPlayedAgainstComputer += 1;
}

/**
 * @brief sets and increases TotalGamesWon 
 * @return void
*/
void ParticipantProfile::IncrWins(){
    TotalGamesWon += 1;
}

/**
 * @brief sets and increases TotalGamesWonAgainstHuman
 * @return void
*/
void ParticipantProfile::IncrWinsAgainstHuman(){
    TotalGamesWonAgainstHuman += 1;
}

/**
 * @brief sets and increases TotalGamesWonAgainstComputer
 * @return void
*/
void ParticipantProfile::IncrWinsAgainstComp(){
    TotalGamesWonAgainstComputer += 1;
}