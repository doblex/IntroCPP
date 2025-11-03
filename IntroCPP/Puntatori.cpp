#include "Puntatori.h"

#include <iostream>
#include <ostream>

Puntatori::Puntatori()
{
    
}

Puntatori::~Puntatori()
{
    
}

void Puntatori::initPointers()
{
    intPointer = &HP;

    std::cout << "HP: " << HP << std::endl;

    *intPointer = 150;
    
    std::cout << "HP: " << HP << std::endl;

    intPointer = arrayInt;

    intPointer = intPointer + 2; // muove il puntatore al 3 elemento dell array 2*sizeof(int)
}

int Puntatori::Damage(int danno, int multiplier, int* totDamage)
{
    if (totDamage == nullptr)
    {
        return -1;
    }

    return *totDamage = danno * multiplier;
}

int Puntatori::DamageRef(int danno, int multiplier, int& totDamage)
{
    return totDamage = danno * multiplier;
}
