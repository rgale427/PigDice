//
// Created by thedi on 11/3/2026.
//

#include "MultiPlayer.h"

#include <algorithm>

MultiPlayer::MultiPlayer() //figure out if playerName is necessary
{
m_gameOver =false;
    int count = 0;
    std::string tempName;
    std::cout<<"How many people are playing?";
    std::cin>>count;
    std::cin.ignore();
    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter player "<< i + 1 << "'s name: ";
        std::getline(std::cin, tempName);
       // auto *ptr = new PDGameV2(tempName);
        //m_players.push_back(*ptr);
        m_players.emplace_back(tempName);
    }
}
void MultiPlayer::mpPlayGame()
{
m_players[0].displayRules();
    while (!m_gameOver){
for (int i = 0; i < m_players.size(); i++)
{
    std::cout << "\n\n" << m_players[i].getPlayerName();
    m_players.at(i).playGame();
    displayScoreBoard();
}
checkForWinner();
    }
}
void MultiPlayer::checkForWinner() //!!!!!!!!!!!!!!!!!!!!!
{
std::vector<int> over50(m_players.size());
   for (int i = 0; i < m_players.size(); i++)
   {
       if (m_players.at(i).getGameScore() >= 50)
       {
           over50.at(i) = m_players.at(i).getGameScore();
           m_gameOver = true;
       }
   }
if (m_gameOver)
{
    auto in = std::max_element(over50.begin(), over50.end());
    long long index = std::distance(over50.begin(), over50.end());
}
}
void MultiPlayer::displayScoreBoard()
{
    for (int i = 0; i < m_players.size(); i++)
    {
        std::cout << m_players.at(i).getPlayerName() <<  "(Score: " << m_players[i].getGameScore() << ")" << " | ";
    }
}