#include "stdafx.h"
#include "Macierz.h"


Macierz::Macierz() : wiersze(1), kolumny(1)
{
	p[0][0] = 0;
}

Macierz::Macierz(int w, int k) : wiersze(w), kolumny(k)
{
	alokacja();

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			p[i][j] = 0;
		}
	}
}

Macierz::Macierz(const Macierz & m) : wiersze(m.wiersze), kolumny(m.kolumny)
{
	alokacja();

	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			p[i][j] = m.p[i][j];
		}
	}
}

Macierz::Macierz(Macierz && m)
{
}


Macierz::~Macierz()
{
	for (int i = 0; i < wiersze; i++)
	{
		delete[] p[i];
	}
	delete[] p;
}

void Macierz::alokacja()
{
	p = new double*[wiersze];
	for (int i = 0; i < wiersze; i++)
	{
		p[i] = new double[kolumny];
	}

}

Macierz Macierz::dodaj(Macierz m)
{

}