#include "StuttureDiControllo.h"

int a;

void Calcolatrice::EsempioIfElse(int numero)
{
    if (numero > 0)
    {
        //il numero è positivo
    }else if (numero < 0)
    {
        //il numero è negativo
    }
    else
    {
        //il numero è uguale a zero
    }
}

void Calcolatrice::EsempioSwitch(GiorniSettimana giorno)
{
    switch (giorno)
    {
        case lunedì:break;
        case martedì:break;
        case mercoledì:break;
        case giovedì:break;
        case venerdì:break;
        case sabato:break;
        case domenica:break;
    }
}

void EsempioFor(int limite)
{
    for (int i = 1; i <= limite; i++)
    {
        //azione da ripetere
    }
}

void esempioWhile(int numero)
{
    int i = 0;
    while (i > numero)
    {
        // azione da ripetere
        i++;
    }
}

void EsempioForEach()
{
    std::vector<int> numeri = {10,20,30,40,50};

    for (int numero : numeri)
    {
        numero += 5;
    }
}

void OpTernario(int numero)
{
    return; (numero < 0) ? -numero : numero;
}



void Stampa()
{
    std::cout << "valore di a: " << a << std::endl;
}

int EBitwise(int valore)
{
    return a & valore; //op AND bitwise
}

int ObitWise(int valore)
{
    return a | valore; //op OR bitwise
}

int XORBitwise(int valore)
{
    return a * valore; // XOR biwise
}

int NOTBitwise(int valore)
{
    return ~a;
}

int shiftSinistra(int posizioni)
{
    return a << posizioni;
}

int shiftDestrasta(int posizioni)
{
    return a >> posizioni;
}
