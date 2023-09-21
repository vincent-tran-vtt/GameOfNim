/**
 * @brief This cpp file handles the account login and creation menu.
 * There are 6 private member variables that each have its own setters and getters.
 * String Username for storing the account username.
 * String Password for storing the account password.
 * Vector Accounts for storing class Accounts.
 * Bool Login for storing login success or fail.
 * Int option for storing option selection from menu
 * Unsigned Int size for storing size of vector Accounts
 * Function AccountFontEnd displays a menu and provides options to login or create an account
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug none
*/
#include "AccountData.h"
#include "Account.h"
#include "ParticipantProfile.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief default constructor.
 * Private bool Login set to false.
*/
AccountData::AccountData(){
    Login = false;
}

/**
 * @brief destructor.
*/
AccountData::~AccountData(){

}

/**
 * @brief setter for private string Username.
*/
void AccountData::SetUsername(std::string mUsername){
    Username = mUsername;
}


/**
 * @brief setter for private string Password.
*/
void AccountData::SetPassword(std::string mPassword){
    Password = mPassword;
}

/**
 * @brief setter for private vector Accounts.
*/
void AccountData::SetAccounts(vector<Account> mAccounts){
    Accounts = mAccounts;
}

/**
 * @brief setter for private vector Participants.
*/
void AccountData::SetParticipants(std::vector<ParticipantProfile> mParticipants){
    Participants = mParticipants;
}

/**
 * @brief setter for private int options.
*/
void AccountData::SetOption(int moption){
    option = moption;
}

/**
 * @brief setter for private unsigned int size.
*/
void AccountData::SetSize(unsigned int msize){
    size = msize;
}

/**
 * @brief setter for private bool login.
*/
void AccountData::SetLogin(bool mlogin){
    Login = mlogin;
}

/**
 * @brief getter for private string Username.
*/
string AccountData::GetUsername(){
    return Username;
}

/**
 * @brief getter for private string Password.
*/
string AccountData::GetPassword(){
    return Password;
}

/**
 * @brief getter for private vector Accounts.
*/
vector<Account> AccountData::GetAccounts(){
    return Accounts;
}

/**
 * @brief getter for private vector Participants.
*/
vector<ParticipantProfile> AccountData::SetParticipants(){
    return Participants;
}

/**
 * @brief getter for private int option.
*/
int AccountData::GetOption(){
    return option;
}

/**
 * @brief getter for private private unsigned int size.
*/
unsigned int AccountData::GetSize(){
    return size;
}

/**
 * @brief getter for private bool Login.
*/
bool AccountData::GetLogin(){
    return Login;
}

/**
 * @brief displays menu and menu selection
 * Function displays menu and ask user for option selection.
 * If user selects login, the user will enter a username and password.
 * If the username and password is correct, Login = true indicaating a successful login.
 * If the username and password is incorrect, Login = false indicating a failed login.
 * If user selects create account, the user will enter a username and account
 * @return void
*/
void AccountData::AccountFrontEnd(){
    unsigned int size = Accounts.size(); /**< a unsigned int size. Set to size of vector Accounts .*/
    bool login = false; /**< a bool login. Set to false. */
    int count = 0;  /**< a int count. Set to 0. */

    cout << "---Login Menu---" << endl;
    cout << "1. Login:" << endl;
    cout << "2. Create Account:" << endl;

    cin >> option;

     /**
      * If option is 1, this indicates the login option.
      * User is asked to enter Username and Password.
      * Username and Password is searched through vector Accounts for any matches.
      * If Username and Password is correct, Login = true,
      * otherwise Login remains false.
     */
    if(option == 1){
        cout << "Enter Username" << endl;
        cin >> Username;

        cout << "Enter Password" << endl;
        cin >> Password;

        while(login == false && count != size){
            if(Accounts[count].Login(Username, Password) == true){
                login = true;
                Login = true;
                cout << "Login Successful" << endl;
            }
            else if(count == size - 1){
                if(Accounts[count].Login(Username, Password) == false){
                    cout << "Wrong Username or Password" << endl;
                }
            }
            count += 1;
        }
    }
    /**
     * If option is 2, this indicates create account option.
     * User is asked to enter Username and Password.
     * Username and Password is stored in Vector Accounts.
    */
    else if(option == 2){
        cout << "Enter Username" << endl;
        cin >> Username;

        cout << "Enter Password" << endl;
        cin >> Password;

        Accounts.push_back(Account(Username, Password));
        Participants.push_back(ParticipantProfile(Username, 0, 0, 0, 0, 0, 0, 0, 0, 0));
    }

    /**
     * Recursion back to function AccountFrontEnd if option entered is invalid
    */
    else{
        cout << "Error" << endl;
        return AccountFrontEnd();
    }
}

/**
 * @brief updates profile stats
 * Does not update stats if total games played, total games played against computer,
 * and total games played against human is zero because dividing a number by zero
 * gives an error.
 * @return void
*/
void AccountData::SetParticipantStats(string username, bool win, int comp){
    unsigned int size = Participants.size(); /**< a unsigned int size. Set to size of vector Accounts .*/
    bool profile = false; /**< a bool profile. Set to false. */
    int count = 0;  /**< a int count. Set to 0. */

    while(profile == false && count != size){
        if(Participants[count].getUsername() == username){
            profile = true;
            Participants[count].IncrTotalGamesPlayed();
        
            if(comp == 1){
                Participants[count].IncrHumanGamesPlayed();
            }
            
            else if(comp == 2){
                Participants[count].IncrCompGamesPlayed();
            }

            if(win == true && comp == 1){
                Participants[count].IncrWinsAgainstHuman();
                Participants[count].IncrWins();
            }
            
            else if(win == true && comp == 2){
                Participants[count].IncrWinsAgainstComp();
                Participants[count].IncrWins();
            }

            if(Participants[count].getTotalGamesPlayed() > 0){
                Participants[count].WinPercentage();
            }

            if(Participants[count].getHumanGamesPlayed() > 0){
                Participants[count].WinPercentageHuman();
            }

            if(Participants[count].getCompGamesPlayed() > 0){
                Participants[count].WinPercentageComp();
            }
            
            FileProfile.SavingProfile(Participants[count].getUsername(), Participants[count].getTotalGamesPlayed(),
                        Participants[count].getWinPercent(), Participants[count].getHumanWinPercent(),
                        Participants[count].getCompWinPercent());
        }
        count += 1;
    }
}