#pragma once

enum GiorniSettimana
{
    lunedì,
    martedì,
    mercoledì,
    giovedì,
    venerdì,
    sabato,
    domenica
};


class Mese
{
public:
    GiorniSettimana giornoAttuale = lunedì;

    int a;
    int b;

    int somma(int a, int b)
    {
        return a + b;
    }

    int differenza(int a, int b){ return  a - b;}
    int moltiplicazione(int a, int b){ return a * b;}
    int divisione(int a, int b){ return a / b;}
    int modulo(int a, int b){ return a % b;}

    int assegnazioneSomma(int valore) { return a += valore;}
    int assegnazioneDifferenza(int valore) { return a -= valore;}
    int assegnazioneMoltiplicazione(int valore){ return a *= valore;}

    bool maggioreDi(int valore){ return a >= valore;}
    bool minoreDi(int valore){ return a <= valore;}

    bool AndLogico(bool cond1, bool cond2){ return cond1 && cond2;}
    bool ORLogico(bool cond1, bool cond2){ return cond1 || cond2;}
    bool NEgazione(bool cond1){ return !cond1;}

    void incremento()
    {
        a++;// viene fatto dopo aver usato il valore 
        ++a;// viene fatto subito, prima di usare il valore
    }
    
    
};
