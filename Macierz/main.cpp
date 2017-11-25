// Macierz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Macierz.h"

int main()
{
	Macierz m1;
	Macierz m2(3, 4);
	Macierz m3(3, 4);
	m2.set();
	Macierz m4(m3);
	Macierz m5(m2.dodaj(m3));
	Macierz m6(4, 3);
	m6.set();
	Macierz m7(m2.mnoz(m6));
	m1.drukuj();
	m2.drukuj();
	m4.drukuj();
	m5.drukuj();
	m7.drukuj();
	
    return 0;
}

