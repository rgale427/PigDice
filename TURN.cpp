#include <iostream>

#include "TURN.h"
#include "PDGame.h" //step 8
Turn::Turn()
{
    m_turnCount = 0;
     m_scoreThisTurn = 0;
     m_turnOver = false;
     m_choice = '\0';
     m_myDie;


}
void Turn::setParentGame(PDGame* parentGame) //step 6
{
    m_parentGame = parentGame;
}
void Turn::takeTurn()
{
    m_turnCount++;
    std::cout << "\nTURN " << m_turnCount;
    //ISSUE: Turn object "part" needs access to m_gameScore in "whole" (PDGame)
    std::cout << " - Game Score: " << m_parentGame->getGameScore(); //step 9
    while (!m_turnOver)
    {
        std::cout << "\nroll or hold? (r/h):  ";
        std::cin >> m_choice;
        if (m_choice == 'r')
        {
            roll();
        }
        else if (m_choice == 'h')
        {
            m_turnOver=true;
        }
        else  {
            std::cout << "Invalid choice! Try Again.";
        }

    }
    std::cout<< "\nScore Banked This Turn: "<< m_scoreThisTurn <<"\n";


}
int Turn::getScoreThisTurn()
{
return m_scoreThisTurn;
}
void Turn::resetTurnOver()
{
    m_turnOver = false;
}
int Turn::getTurnCount()
{
    return m_turnCount;
}
void Turn::resetScoreThisTurn()
{
    m_scoreThisTurn = 0;
}
void Turn::roll()
{
    m_myDie.rollDie();

      std::cout << "Die: " << m_myDie.getDieValue();

    if (m_myDie.getDieValue() == 1)
    {
        std::cout << "\nTurn Over. No Score.";
        m_scoreThisTurn = 0;
        m_turnOver = true;
    }
    else{
        m_scoreThisTurn += m_myDie.getDieValue();
        std::cout <<" - Running score this turn: " << m_scoreThisTurn;

    }
}