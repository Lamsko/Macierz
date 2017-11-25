#include "stdafx.h"
#include "Macierz.h"
#include <iostream>

using namespace std;

Macierz::Macierz() : wiersze(1), kolumny(1)
{
	alokacja();
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

//konstruktor kopiujacy
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

//konstruktor przenosz¹cy
Macierz::Macierz(Macierz && m) : wiersze(m.wiersze), kolumny(m.kolumny)
{
	alokacja();

	for (int i = 0; i < wiersze; ++i) {
		for (int j = 0; j < kolumny; ++j) {
			p[i][j] = m.p[i][j];
		}
	}
}


Macierz::~Macierz()
{
	for (int i = 0; i < wiersze; i++)
	{
		delete[] p[i];
	}
	delete[] p;
}

//Alokuje pamiêæ pod elementy macierzy
void Macierz::alokacja()
{
	p = new double*[wiersze];
	for (int i = 0; i < wiersze; i++)
	{
		p[i] = new double[kolumny];
	}

}

//dodaje do macierzy druga macierz, wynik zwraca jako macierz
Macierz Macierz::dodaj(Macierz m)
{

	Macierz mw(wiersze, kolumny);
	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			mw.p[i][j] = p[i][j] + m.p[i][j];
		}
	}
	return mw;


}

Macierz Macierz::mnoz(Macierz m)
{

	Macierz mw(wiersze, m.kolumny);
	for (int i = 0; i < mw.wiersze; i++)
	{
		for (int j = 0; j < mw.kolumny; j++)
		{
			for (int k = 0; k < kolumny; k++)
				mw.p[i][j] += (p[i][k] * m.p[k][j]);
		}
	}
	return mw;

}

Macierz Macierz::mnozenieSkalar(int x)
{
	Macierz mw(wiersze, kolumny);
	for (int i = 0; i < mw.wiersze; i++)
	{
		for (int j = 0 ; j < mw.kolumny; j++)
			mw.p[i][j] = p[i][j] * x;
	}

	return mw;
}


// Ustawia wszystkie elementy w Macierzy
void Macierz::set()
{
	cout << "Wypelnij macierz " << wiersze << " wiersze i " << kolumny << " kolumny:" << endl;
	for (int i = 0; i < wiersze; i++)
	{
		for (int j = 0; j < kolumny; j++)
		{
			cin >> p[i][j];
		}
	}
}

// Ustawia wartoœæ wybranego elementu w Macierzy lub -1 jeœli nie ma takiego elementu (wstawainy element,
void Macierz::set(int x, int w, int k)
{
	if (w > wiersze || k > kolumny || w < 1 || k < 1)
		cout << "Nie ma elementu o takim adresie w macierzy" << endl;
	else
		p[w-1][k-1] = x;
}

// Zwraca wybrany element macierzy lub -1 jesli nie ma takiego elementu
int Macierz::get(int w, int k)
{
	if (w > wiersze || k > kolumny || w < 1 || k < 1)
		return -1;
	else
		return p[w-1][k-1];
}

//Drukuje macierz na wyjœcie
void Macierz::drukuj()
{
	cout << "Macierz: ";
	for (int i = 0; i < wiersze; i++)
	{
		cout << endl;
		for (int j = 0; j < kolumny; j++)
			cout << p[i][j] << " ";
	}
	cout << endl << endl;
}