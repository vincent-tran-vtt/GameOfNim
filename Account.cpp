/**
 * @brief This cpp file handles the username and password of an account.
 * There are 2 private member variables that each have its own setters and getters.
 * String Username for storing the account username.
 * String Password for storing the account password.
 * Function Login returns true if correct username and password in parameters otherwise returns false.
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug login is successful when there are no accounts created.
*/
#include "Account.h"

#include <string>
#include <iostream>

using namespace std;

/**
 * @brief default constructor.
*/
Account::Account(){

}

/**
 * @brief overload constructor.
*/
Account::Account(string mUsername, string mPassword){
    Username = mUsername;
    Password = mPassword;
}

/**
 * @brief destructor.
*/
Account::~Account(){

}

/**
 * @brief Getter for private string Password.
*/
string Account::GetPassword(){
    return Password;
}

/**
 * @brief Getter for private string Username.
*/
string Account::GetUsername(){
    return Username;
}

/**
 * @brief Setter for private string Password.
*/
void Account::SetPassword(string mPassword){
    Password = mPassword;
}

/**
 * @brief Setter for private string Username.
*/
void Account::SetUsername(string mUsername){
    Username = mUsername;
}

/**
 * @brief checks if username and password is correct.
 * function returns true if parameters for username
 * and password match with private username and password.
 * @param mUsername a string argument
 * @param mPassword a string argument
 * @return bool
*/
bool Account::Login(string mUsername, string mPassword){
    if((Username == mUsername) && (Password == mPassword)){
        return true;
    }
    else{
        return false;
    }
}