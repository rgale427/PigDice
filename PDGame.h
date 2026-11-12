

#ifndef PIGDICE1_PDGAME_H
#define PIGDICE1_PDGAME_H
#include "TURN.h"

class PDGame
{
protected:
//private:
    Turn m_myTurn;
bool m_gameOver;
    int m_gameScore;
public:
PDGame();
    int getGameScore(); //step 1
private:
    static void displayRules();
public:
    virtual void playGame();


};


#endif //PIGDICE1_PDGAME_H
