/**
 * @brief This header file handles the computer's moves.
 * There are 5 private member variables that each have its own setters and getters.
 * Int remove for storing how much to remove from pile.
 * Int pile for storing the pile size.
 * Int mode for storing if computer is in normal or advanced mode.
 * Int CanRemove for storing how much a computer can remove.
 * Int target for storing the pile size wanted.
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug may infinitely loop, reason unknown
*/

#ifndef COMPUTER_H
#define COMPUTER_H

class Computer{
    private:
        int remove; /**< a int remove. */
        int pile; /**< a int pile. */
        int mode; /**< a int mode. */
        int CanRemove; /**< a int CanRemove. */
        int target; /**< a int target. */
    public:
        Computer(); //!< a Computer default constructor.
        Computer(int remove, int pile, int mode); //!< a Computer overload constructor.
        ~Computer(); //!*< a ~Computer destructor.

        int GetRemove(); //!< a GetRemove getter.
        int GetPile(); //!< a GetPile getter.
        int GetMode(); //!< a GetMode getter.
        int GetCanRemove(); //!< a GetCanRemove getter.
        int GetTarget(); //!< a GetTarget getter.

        void SetRemove(int remove);  //!< a SetRemove setter.
        void SetPile(int pile); //!< a SetPile setter.
        void SetMode(int mode); //!< a SetMode setter.
        void SetCanRemove(int CanRemove); //!< a SetCanRemove setter.
        void SetTarget(int target); //!< a SetTarget setter.

        int ComputerAI(); //!< a ComputerAI function.
        void ComputerNormal(); //!< a ComputerNormal function.
        void ComputerAdvanced(); //!< a ComputerAdvanced function.
        void TargetNumber(); //!< a TargetNumber function.
    
};

#endif