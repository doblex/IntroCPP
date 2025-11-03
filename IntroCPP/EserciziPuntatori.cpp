#include "EserciziPuntatori.h"



using namespace std;

Esercizio1::Esercizio1()
{
    numero = 42;
}

void Esercizio1::Out()
{
    p_numero = &numero;

    cout << numero << endl;
    cout << *p_numero << endl;
}

Esercizio2::Esercizio2()
{
    prezzo = 99.99;
    p_prezzo = &prezzo;
}


void Esercizio2::Out()
{
    *p_prezzo = 149.99;
    cout << *p_prezzo << endl;
}

Esercizio3::Esercizio3()
{
}

void Esercizio3::Raddoppia(int* ptr)
{
    cout << *ptr << endl;

    *ptr = (*ptr) * 2;
    
    cout << *ptr << endl;
}

Esercizio4::Esercizio4()
{
}

void Esercizio4::Scambia(int* ptr_a, int* ptr_b)
{
    int supp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = supp;
}

Esercizio5::Esercizio5()
{
}

void Esercizio5::Out()
{
    p_parola = parola;

    cout << parola << endl;
    
    *p_parola = 'C';
    
    cout << parola << endl;
}

Esercizio6::Esercizio6()
{
}

void Esercizio6::Out()
{
    p_array = numeri;

    cout << *(p_array + 2) << endl;
}

Esercizio7::Esercizio7()
{
}

void Esercizio7::Out()
{
    int* end = voti + sizeof(voti) / sizeof(voti[0]); // trovo l'indirizzo dell'ultimo elemento
    for (p_array = voti; p_array < end; p_array++)
    {
        cout << *p_array << endl;
    }
}

Esercizio8::Esercizio8()
{
    int* intero = new int;

    *intero = 123;

    cout << *intero << endl;
    delete intero;
    intero = nullptr;
}

Esercizio9::Esercizio9()
{
    point = new Point();

    point->x = 10;
    point->y = 5;
}

void Esercizio9::Out()
{
    cout << point->x << endl;
    cout << point->y << endl;

    delete point;
    point = nullptr;
}

Esercizio10::Esercizio10()
{
    p1 = &a;
    p2 = &p1;
}
void Esercizio10::Out()
{
    cout << **p2 << endl;
    cout << p1 << endl;
    cout << p2 << endl;
}







