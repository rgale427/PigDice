//
// Created by thedi on 11/3/2026.
//

#ifndef PIGDICE1_PDGAMEV2_H
#define PIGDICE1_PDGAMEV2_H
#include <string>
#include <iostream>
#include "PDGame.h"
class PDGameV2: public PDGame
{
private:
    std::string m_playerName;
public:
    PDGameV2(std::string &playerName);
    ~PDGameV2();
    std::string getPlayerName();
      void displayRules();
    void playGame() override;


};


#endif //PIGDICE1_PDGAMEV2_H
