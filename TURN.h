

#ifndef PIGDICE1_TURN_H
#define PIGDICE1_TURN_H
#include "DIE.h"
//#include "PDGame.h"
class PDGame;//step 3

class Turn
{
private:
  int m_turnCount  ;
    int m_scoreThisTurn;
    bool m_turnOver;
    char m_choice;
    Die m_myDie;
    PDGame* m_parentGame = nullptr;//step 4
public:
    Turn();
    void setParentGame(PDGame* parentGame); //step 5
    void takeTurn();
    int getScoreThisTurn();
    void resetTurnOver();
    int getTurnCount();
void resetScoreThisTurn();
private:
    void roll();
};



#endif //PIGDICE1_TURN_H
