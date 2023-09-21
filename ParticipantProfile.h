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

#ifndef PARTICIPANTPROFILE_H
#define PARTICIPANTPROFILE_H

#include <string>

class ParticipantProfile{
    private:
        std::string username; /**< a string username. */
        int TotalGamesPlayed; /**< a int TotalGamesPlayed. */
        int TotalGamesPlayedAgainstHuman; /**< a int TotalGamesPlayedAgainstHuman. */
        int TotalGamesPlayedAgainstComputer; /**< a int TotalGamesPlayedAgainstComputer */
        int TotalGamesWon; /**< a int TotalGamesWon */
        int TotalGamesWonAgainstHuman; /**< a int TotalGamesWonAgainstHuman. */
        int TotalGamesWonAgainstComputer; /**< a int TotalGamesWonAgainstComputer. */
        double OverallWinningPercentage; /**< a double OverallWinningPercentage. */
        double WinningPercentageAgainstHuman; /**< a double WinningPercentageAgainstHuman. */
        double WinningPercentageAgainstComputer; /**< a double WinningPercentageAgainstComputer. */
    public:
        ParticipantProfile(); //!< a ParticipantProfile default constructor.
        ParticipantProfile(std::string username, int TotalGamesPlayed, int TotalGamesPlayedAgainstHuman,
                           int TotalGamesPlayedAgainstComputer, int TotalGamesWon, int TotalGamesWonAgainstHuman,
                           int TotalGamesWonAgainstComputer, double OverallWinningPercentage,
                           double WinningPercentageAgainstHuman,
                           double WinningPercentageAgainstComputer); //!< a ParticipantProfile overload constructor.
        ~ParticipantProfile(); //!< a ParticipantProfile destructor.

        std::string getUsername(); //!< a getUsername getter.
        int getTotalGamesPlayed(); //!< a getTotalGamesPlayed getter.
        int getHumanGamesPlayed(); //!< a getHumanGamesPlayed getter.
        int getCompGamesPlayed(); //!< a getCompGamesPlayed getter.
        int getWins(); //!< a getWins getter.
        int getWinsAgainstHuman(); //!< a getWinsAgainstHuman getter.
        int getWinsAgainstComp(); //!< a getWinsAgainstComp getter.
        double getWinPercent(); //!< a getWinPercetn getter.
        double getHumanWinPercent(); //!< a getHumanWinPercent getter.
        double getCompWinPercent(); //!< a getCompWinPercent getter.

        void setUsername(std::string name); //!< a setUsername setter.
        void setTotalGamesPlayed(int played); //!< a setTotalGamesPlayed setter.
        void setHumanGamesPlayed(int hPlayed); //!< a setHumanGamesPlayed setter.
        void setCompGamesPlayed(int cPlayed); //!< a setCompGamesPlayed setter.
        void setWins(int wins); //!< a setWins setter.
        void setWinsAgainstHuman(int hWin); //!< a setWinsAgainstHuman setter.
        void setWinsAgainstComp(int cWin); //!< a setWinsAgainstComp setter.
        void setWinPercent(double wPercent); //!< a setWinPercetn setter.
        void setHumanWinPercent(double hWinPercent); //!< a setHumanWinPercent setter.
        void setCompWinPercent(double cWinPercent); //!< a setCompWinPercent setter.

        void WinPercentage(); //!< a WinPercentage function.
        void WinPercentageHuman(); //!< a WinPercentageHuman function.
        void WinPercentageComp(); //!< a WinPercentageComp function.

        void IncrTotalGamesPlayed(); //!< a IncrTotalGamesPlayed function.
        void IncrHumanGamesPlayed(); //!< a IncrHumanGamesPlayed function.
        void IncrCompGamesPlayed(); //!< a IncrCompGamesPlayed function.
        void IncrWins(); //!< a IncrWin function.
        void IncrWinsAgainstHuman(); //!< a IncrWinsAgainstHuman function.
        void IncrWinsAgainstComp(); //!< a IncrWinsAgainstComp function.
};

#endif