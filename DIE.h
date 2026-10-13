

#ifndef PIGDICE1_DIE_H
#define PIGDICE1_DIE_H
#include <random>
class Die
{
private:
    int m_dieValue;
   // int m_numOfSides;
public:
    Die();
    void rollDie();
    int getDieValue() const;
    /*
    void setNumOfSides(int numOfSides);
    int getNumOfSides();
    void setValue();
    int getValue();
    */

};



#endif //PIGDICE1_DIE_H
