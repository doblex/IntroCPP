#include "IntroCPP.h"

Rettangolo::Rettangolo(float l, float h)
{
	larghezza = l;
	altezza = h;
}

Rettangolo::~Rettangolo()
{
	larghezza = 0;
	altezza = 0;
}

float Rettangolo::Area()
{
	return (larghezza * altezza);
}
