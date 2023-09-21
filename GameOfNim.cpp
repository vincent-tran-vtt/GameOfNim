/**
 * @brief This program runs a Game of Nim
 * Win by making the other player take the last marble.
 * @author Vincent Tran and Alex Roldan
 * @version 1.0.0
 * @date 5/11/23
 * @bug none
*/


#include <iostream>
#include <vector>

#include "Account.h"
#include "AccountData.h"
#include "NimGame.h"
#include "ParticipantProfile.h"
#include "Participant.h"

using namespace std;

int main(){
    bool Login = false; /**< a bool Login. */
    AccountData AccountDataSet; /**< a AccountData Class definiton AccountDataSet. */
    

    /**
     * Infite while loop to keep the game going.
     * while loop with parameter Login to loop until login is true.
     * Username is set.
     * Game is initiated.
     * GameMatch starts.
     * Participant stats stored after game is over
    */
    while(1){

        while(Login == false){
            AccountDataSet.AccountFrontEnd();
            Login = AccountDataSet.GetLogin();
        }

        NimGame CSGO;

        CSGO.SetUsername(AccountDataSet.GetUsername());
        
        CSGO.GameInit();

        CSGO.GameMatch();

        AccountDataSet.SetParticipantStats(CSGO.GetUsername(), CSGO.GetWin(), CSGO.GetComp());

        Login = false;

        AccountDataSet.SetLogin(false);
    }

    return 0;
}