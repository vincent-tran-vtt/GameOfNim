/**
 * @brief This header file handles the mode of the game
 * There is 1 private member variable that each have its own setter and getter.
 * Int mode for storing the mode of the game
 * @author Vincent Tran
 * @version 1.0.0
 * @date 5/8/23
 * @bug none
*/

#ifndef MODE_H
#define MODE_H

class Mode{
    private:
        int mode; /**< a int mode. */

    public:
        Mode(); //!< a Mode constructor.
        ~Mode(); //!< ~Mode destructor.

        int GetMode(); //!< a GetMode getter.

        void SetMode(int mode); //!< a SetMode setter.

        void SetMode(); //!< a SetMode function.
};

#endif