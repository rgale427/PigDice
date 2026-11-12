//
// Created by thedi on 11/3/2026.
//

#ifndef PIGDICE1_MULTIPLAYER_H
#define PIGDICE1_MULTIPLAYER_H
#include <string>
#include <vector>
#include "PDGameV2.h"

#include <iostream>

class MultiPlayer
{
private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver;
public:
    MultiPlayer();
    void mpPlayGame();
    void checkForWinner();
    void displayScoreBoard();
};


#endif //PIGDICE1_MULTIPLAYER_H
