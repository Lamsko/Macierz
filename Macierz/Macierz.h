#pragma once
class Macierz
{
public:
	Macierz();
	Macierz(int w, int k);
	Macierz(const Macierz& m);
	Macierz(Macierz&& m);
	~Macierz();
};

