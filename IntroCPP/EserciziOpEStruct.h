#pragma once
#include <string>
#include <vector>

class Es1
{
enum StatoSemaforo{ ROSSO, GIALLO, VERDE };

    
public:
    Es1();
    StatoSemaforo statoAttuale = GIALLO;
    void Out();
    
};

class Es2
{
public:
    Es2(float base, float altezza);
    void CalculateArea();
    
private:
    float base;
    float altezza;
};

class Es3
{
public:
    Es3();
};

class Es4
{
public:
    int contatore = 5;
    int risultato = 1;
    Es4();
};

class Es5
{
public:
    Es5();
};

class Es6
{
public:
    Es6();
private:
    int punti = 85;
    int presenze = 90;
    int requisitoMinimo = 60;
};

class Es7
{
public:
    Es7();
private:    
    std::vector<std::string> colori = {"Rosso", "Verde", "Blu", "Giallo"};
};

class Es8
{
public:
    Es8();
private:
    std::vector<int> prezzi = {10, 25, 5, 40};
};

class Es9
{
public:
    Es9();
private:
    unsigned int permessi : 4;
    unsigned short maschera : 4; 
};

class Es10
{
public:
    Es10();
private:
    int valoreIniziale = 13;
};
