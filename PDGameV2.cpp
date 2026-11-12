//
// Created by thedi on 11/3/2026.
//

#include "PDGameV2.h"
#include <string>
PDGameV2::PDGameV2(std::string &playerName)
{
if (!playerName.empty())
{
    m_playerName = playerName;
}
    else
    {
        static int index=1;
        m_playerName = "Anonymous Player" + std::to_string(index);
        index++;
    }
}
PDGameV2::~PDGameV2()
{
std::cout << "\n Nom nom, PDGameV2 object was eaten ;3\n";
}
[[nodiscard]] std::string PDGameV2::getPlayerName()
{
    return m_playerName;

}

void PDGameV2::displayRules()
{
    std::cout << "Let's Play PIG DICE!" << std::endl;
    std::cout << "* See which player will reach 50 points in the fewest turns." << std::endl;
    std::cout << "* Turn ends when you hold or roll a 1." << std::endl;
    std::cout << "* If you roll a 1, you lose all points for the turn." << std::endl;
    std::cout << "* If you hold, you save all points for the turn." <<std::endl;
}
void PDGameV2::playGame(){
    m_myTurn.takeTurn();
    m_gameScore += m_myTurn.getScoreThisTurn();
    if (m_gameScore<50)
    {
        m_myTurn.resetTurnOver();
        m_myTurn.resetScoreThisTurn();
    }
}
