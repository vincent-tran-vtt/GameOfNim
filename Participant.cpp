/**
 * @brief This cpp file handles outputing text of profile stats
 * There is 1 private member variable
 * Ofstream outfilestats stream out strings
 * @author Vincent Tran and Alex Roldan
 * @version 1.0.0
 * @date 5/11/23
 * @bug none
*/

#include "Participant.h"

#include <fstream>
#include <iomanip>

using namespace std;

/**
 * @brief default constructor.
*/
Participant::Participant(){

}

/**
 * @brief destructor.
*/
Participant::~Participant(){

}

/**
 * @brief outputs stats on file
 * @return void
*/
void Participant::SavingProfile(string username, int TotalGamesPlayed, double OverallWinningPercentage,
                                  double WinningPercentageAgainstHuman, double WinningPercentageAgainstComputer){
    outfilestats.open("ParticipantProfile.txt");
    outfilestats << "Username: " << username << endl;
    outfilestats << "Total Games Played: " << to_string(TotalGamesPlayed) << endl;
    outfilestats << "Overall Win Percentage: " << fixed << setprecision(2) << OverallWinningPercentage << "%" << endl;
    outfilestats << "Overall Win Percentage Against Human: " << fixed << setprecision(2) << WinningPercentageAgainstHuman << "%" << endl;
    outfilestats << "Overall Win Percentage Against Computer: " << fixed << setprecision(2) << WinningPercentageAgainstComputer << "%" << endl;
    outfilestats.close();
}