#pragma once
#include <iostream>

class Esercizio1
{
public:
    Esercizio1();
    ~Esercizio1();

    void Out();
    
private:
    int numero;
    int* p_numero;
};

class Esercizio2
{
public:
    Esercizio2();
    ~Esercizio2();
    
    void Out();

private:
    double prezzo;
    double* p_prezzo;
};


class Esercizio3
{
public:
    Esercizio3();
    ~Esercizio3();

    void Raddoppia(int* ptr);
};

class Esercizio4
{
public:
    Esercizio4();
    ~Esercizio4();

    void Scambia(int* ptr_a, int* ptr_b);
};

class Esercizio5
{
public:
    Esercizio5();
    ~Esercizio5();

    void Out();
    
private:
    char parola[10] ="Puntatore";
    char* p_parola; 
};

class Esercizio6
{
    public:
    Esercizio6();
    ~Esercizio6();

    void Out();

private:
    int numeri[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* p_array;    
};

class Esercizio7
{
public:
    Esercizio7();
    ~Esercizio7();

    void Out();

private:
    int voti[4] = {22, 25, 30, 28};
    int* p_array;
};

class Esercizio8
{
public:
    Esercizio8();
    ~Esercizio8();

    void Out();
};

class Esercizio9
{
    
public:
    struct Point
    {
        int x;
        int y;
    };

    
    Esercizio9();
    ~Esercizio9();

    void Out();

private:
    Point* point;
};


class Esercizio10
{
public:
    Esercizio10();
    ~Esercizio10();

    void Out();
private:
    int a = 100;
    int* p1;
    int** p2;
};
