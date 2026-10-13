

#ifndef PIGDICE1_PDGAME_H
#define PIGDICE1_PDGAME_H
#include "TURN.h"

class PDGame
{

private:
    Turn m_myTurn;
bool m_gameOver;
    int m_gameScore;
public:
PDGame();
    int getGameScore(); //step 1
private:
    void displayRules();
    void playGame();


};


#endif //PIGDICE1_PDGAME_H
