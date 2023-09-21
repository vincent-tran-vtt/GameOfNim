/**
 * @brief This header file handles the account login and creation menu.
 * There are 6 private member variables that each have its own setters and getters.
 * String Username for storing the account username.
 * String Password for storing the account password.
 * Vector Accounts for storing class Accounts.
 * Vector Participants for storing class ParticipantProfile
 * Bool Login for storing login success or fail.
 * Int option for storing option selection from menu.
 * Unsigned Int size for storing size of vector Accounts.
 * Participant Class definition text.
 * Function AccountFontEnd displays a menu and provides options to login or create an account.
 * Function SetParticipantStats sets stats for the user.
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug none
*/

#ifndef ACCOUNTDATA_H
#define ACCOUNTDATA_H

#include "Account.h"
#include "Participant.h"
#include "ParticipantProfile.h"

#include <string>
#include <vector>

class AccountData{
    private:
        std::string Username; /**< a string Username. */
        std::string Password; /**< a string Password. */
        std::vector<Account> Accounts; /**< a vector Accounts. */
        std::vector<ParticipantProfile> Participants; /**< a vector Participants. */
        bool Login; /**< a bool Login. */
        int option; /**< a int option. */
        unsigned int size; /**< a unsigned int size. */
        Participant FileProfile;
    public:
        AccountData(); //!< a AccountData default constructor.
        ~AccountData();  //!< a ~AccountData destructor.

        void SetUsername(std::string Username); //!< a SetUsername setter.
        void SetPassword(std::string Password); //!< a SetPassword setter.
        void SetAccounts(std::vector<Account> Accounts); //!< a SetAccounts setter.
        void SetParticipants(std::vector<ParticipantProfile> Participants); //!< a SetParticipants setter.
        void SetOption(int option); //!< a SetOption setter.
        void SetSize(unsigned int size); //!< a SetSize setter.
        void SetLogin(bool Login); //!< a SetLogin setter.

        std::string GetUsername(); //!< a GetUsername getter.
        std::string GetPassword(); //!< a GetPassword getter.
        std::vector<Account> GetAccounts(); //!< a GetAccounts getter.
        std::vector<ParticipantProfile> SetParticipants(); //!< a getParticipants getter.
        int GetOption(); //!< a GetOption getter.
        unsigned int GetSize(); //!< a GetSize getter.
        bool GetLogin(); //!< a GetLogin getter.

        void AccountFrontEnd(); //!< a AccountFrontEnd function.

        void SetParticipantStats(std::string username, bool win, int comp); //!< a SetParticipantStats function.
};

#endif