#pragma once
#include "StuttureDiControllo.h"

class Puntatori
{
public:
    Puntatori();
    ~Puntatori();

    int value = 42;
    int* intPointer = nullptr;
    char* charPointer = nullptr;
    Calcolatrice* calcolatricePointer = nullptr;

    int arrayInt[5] = {1, 2, 3, 4, 5}; 

private:
    int HP = 100;
    void initPointers();
    int Damage(int danno, int multiplier, int* totDamage);
    int DamageRef(int danno, int multiplier, int& totDamage);
};
