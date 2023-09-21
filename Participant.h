/**
 * @brief This header file handles outputing text of profile stats
 * There is 1 private member variable
 * Ofstream outfilestats stream out strings
 * @author Vincent Tran and Alex Roldan
 * @version 1.0.0
 * @date 5/11/23
 * @bug none
*/

#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <fstream>

class Participant{
    private:
        std::ofstream outfilestats; /**< a ofstream outfilestats. */
    public:
        Participant(); //!< a Participant default constructor.
        ~Participant(); //!< a Participant destructor.

        void SavingProfile(std::string username, int TotalGamesPlayed, double OverallWinningPercentage,
                            double WinningPercentageAgainstHuman,
                            double WinningPercentageAgainstComputer); //!< a SavingProfile function.
};

#endif