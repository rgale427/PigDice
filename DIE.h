

#ifndef PIGDICE1_DIE_H
#define PIGDICE1_DIE_H
#include <random>
class Die
{
private:
    int m_value;
    int m_numOfSides;
public:
    Die();
    void setNumOfSides(int numOfSides);
    int getNumOfSides();
    void setValue();
    int getValue();

};



#endif //PIGDICE1_DIE_H
