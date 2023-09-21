/**
 * @brief This header file handles outputing logs to a text file.
 * There is 1 private member variable.
 * Ofstream outfile stores texts of game logs.
 * @author Vincent Tran and Alex Roldan
 * @version 1.0.0
 * @date 5/11/23
 * @bug none
*/

#ifndef PLAYBYPLAY_H
#define PLAYBYPLAY_H

#include <fstream>

class PlayByPlay{
    private:
        std::ofstream outfile; /**< a ofstream outfile. */
    public:
        PlayByPlay(); //!< a PlayByPlay default constructor.
        ~PlayByPlay(); //!< a PlayByPlay destructor.

        void TextFileRemoved(int turn, int comp, int removeFromPile, int pile, std::string username); //!< a TextFileRemoved function.

        void TextFileMax(int CanRemove); //!< a TextFileMax function.

        void TextFileOutOfRange(); //!< a TextFileOutOfRange function.

        void TextFileMode(int mode); //!< a TextFileMode funcion;

        void TextFileFirstTurn(int turn, int comp, std::string username); //!< a TextFileFirstTurn function.

        void TextFileTurn(int turn, int comp, std::string username);  //!< a TextFileTurn function.

        void TextFileSPile(int spile); //!< a TextFileSPile function.

        void TextFileMatch(int turn, int comp, std::string username); //!< a TextFileMatch function.
    
};

#endif