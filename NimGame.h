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
 * Computer class definition RComputer.
 * PlayByPlay class definition Plays.
 * A 
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug none
*/

#ifndef NIMGAME_H
#define NIMGAME_H

#include "Mode.h"
#include "Player.h"
#include "Computer.h"
#include "PlayByPlay.h"
#include "Participant.h"
#include "ParticipantProfile.h"

class NimGame{
    private:
        int pile; /**< a int pile. */
        int ComputerRemove; /**< a int ComputerRemove. */
        int HumanRemove; /**< a int HumanRemove. */
        int CanRemove; /**< a int CanRemove. */
        int mode; /**< a int mode. */
        int FirstTurn;  /**< a int FirstTurn. */
        int turn; /**< a int turn. */
        int removeFromPile; /**< a int removeFromPile. */
        int comp; /**< a int comp. */
        bool win; /**< a bool win. */
        std::string username; /**< a string username. */
        Mode RMode; /**< a Mode class RMode. */
        Player R1Player; /**< a Player class defintion R1Player. */
        Player R2Player; /**< a Player class definiton R2PLayer. */
        Computer RComputer; /**< a Computer class definiton RComputer. */
        PlayByPlay Plays; /**< PlayByPlay class definition Plays. */

    public:
        NimGame(); //!< a NimGame default constructor.
        NimGame(int pile, int CanRemove, int mode, int FirstTurn);  //!< a NimGame overload constructor.
        ~NimGame();  //!< a ~NimGame destructor.

        int GetPile(); //!< a GetPile getter.
        int GetMode(); //!< a GetMode getter.
        int GetFirstTurn(); //!< a GetFirstTurn getter.
        int GetCanRemove(); //!< a GetCanRemove getter.
        int GetTurn(); //!< a GetTurn getter.
        int GetComp(); //!< a GetComp getter.
        std::string GetUsername(); //!< a GetUsername getter.
        bool GetWin(); //!< a GetWin getter;

        void SetMode(int mode); //!< a SetMode setter.
        void SetPile(int pile); //!< a SetPile setter.
        void SetFirstTurn(int FirstTurn); //!< a SetFirstTurn setter.
        void SetCanRemove(int CanRemove); //!< a SetCanRemove setter.
        void SetTurn(int turn); //!< a SetTurn setter.
        void SetComp(int comp); //!< a SetComp setter.
        void SetUsername(std::string username); //!< a SetUsername setter.
        void SetWin(bool win); //!, a SetWin setter.

        void RemoveFromPile(); //!< a function RemoveFromPile.

        void RandomFirstTurn(); //!< a function RandomFirstTurn.

        void RandomMode(); //!< a function RandomMode.

        void SetCanRemove(); //!< a function SetCanRemove.

        void RandomPile(); //!< a function RandomPile.

        void GameInit(); //!< a function GameInit.

        void GameMatch(); //!< a function GameMatch.

        void DisplayRemovePile(); //!< a function DisplayRemovePile.
};

#endif