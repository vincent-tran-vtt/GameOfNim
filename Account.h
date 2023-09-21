/**
 * @brief This header file handles the username and password of an account.
 * There are 2 private member variables that each have its own setters and getters.
 * String Username for storing the account username.
 * String Password for storing the account password.
 * Function Login returns true if correct username and password in parameters otherwise returns false.
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug login is successful when there are no accounts created.
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>


class Account{
    private:
        std::string Username; /**< a string Username. */
        std::string Password; /**< a string Password. */
    public:
        Account(); //!< a Account default constructor.
        Account(std::string Username, std::string Password); //!< a Account overload constructor.
        ~Account(); //!< a ~Account destructor.

        std::string GetPassword(); //!< a GetPassword getter.
        std::string GetUsername(); //!< a GetUsername getter.
        
        void SetPassword(std::string Password); //!< a Password setter.
        void SetUsername(std::string Username); //!< a Username setter.

        bool Login(std::string Username, std::string Password); //!< a Login function.
};

#endif