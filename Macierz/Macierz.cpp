#include "stdafx.h"
#include "Macierz.h"


Macierz::Macierz()
{
	wiersze = 1;
	kolumny = 1;
	p[0][0] = 0;
}

Macierz::Macierz(int w, int k)
{
	wiersze = w;
	kolumny = k;

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < k; j++)
		{
			p[i][j] = 0;
		}
	}
}

Macierz::Macierz(const Macierz & m)
{
}

Macierz::Macierz(Macierz && m)
{
}


Macierz::~Macierz()
{
}

void Macierz::alokacja()
{

}