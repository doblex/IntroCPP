#pragma once
class Rettangolo
{
public:
	Rettangolo(float l, float h);
	~Rettangolo();

	float Area();

protected:
	float larghezza;
	float altezza;

};