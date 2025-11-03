#include "EserciziOpEStruct.h"

#include <iostream>
#include <ostream>
#include <string>

using namespace std;

Es1::Es1()
{
}

void Es1::Out()
{
    string out;
    
    switch (statoAttuale)
    {
        case ROSSO:
            out = "STOP! Attendere";
            break;
        case GIALLO:
            out = "Attenzione! Prepararsi";
            break;
        case VERDE:
            out = "VIA! Si può procedere";
            break;
    }

    cout << out << endl;
}

Es2::Es2(float base, float altezza)
{
    this->base = base;
    this->altezza = altezza;
}

void Es2::CalculateArea()
{
    string out;
    float area = base*altezza;

    area *= 2;
    if (area > 100)
    {
        out = "L'area raddoppiata supera i 100";
    }
    else
    {
        out = "L'area raddoppiata è 100 o meno";
    }

    cout << out << endl;
}

Es3::Es3()
{
    for (int i = 0; i < 21; ++i)
    {
        if (i%2 == 0)
        {
            cout << i << endl;
        }
    }

    // for (int i = 0; i < 21; i = i + 2)
    // {
    //     cout << i << endl;
    // }
}

Es4::Es4()
{
    while (contatore > 0)
    {
        risultato *= contatore;
        contatore --;
    }

    cout << risultato << endl;
}

Es5::Es5()
{
    bool continua = true;
    int input = 0;
    do
    {
        cout << "Continuare il ciclo? s/n" <<endl;
        input = cin.get();
        if (input == 'n' || input == 'N')
        {
            continua = false;
        }
        
    }
    while (continua);
}

Es6::Es6()
{
    string out = "Non promosso";
    
    if (punti > requisitoMinimo && presenze >= 80)
    {
        out = "promosso";
    }

    cout << out << endl;
}

Es7::Es7()
{
    for (auto element : colori)
    {
        cout << "il colore è: " << element << endl;
    }
}

Es8::Es8()
{
    for (auto& element : prezzi)
    {
        element = (int)((float)element * 1.1f);
    }

    for (auto& element : prezzi)
    {
        cout << element << endl;
    }
}

Es9::Es9()
{
    permessi = 6; //0110
    maschera = 2; //0010
    string out = "Il permesso di scrittura NON e' attivo.";
    
    if (permessi & maschera)
    {
        out = "Il permesso di scrittura e' attivo.";
    }

    cout << out << endl;
}

Es10::Es10()
{
    int valoreMoltiplicato = valoreIniziale << 3;
    int valoreDiviso = valoreMoltiplicato >> 2;

    cout << "Il valore inizale e' : " << valoreIniziale << endl;
    cout << "Il valore moltiplicato e' : " << valoreMoltiplicato << endl;
    cout << "Il valore diviso e' : " << valoreDiviso << endl;
}
