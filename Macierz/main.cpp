// Macierz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Macierz.h"

int main()
{
	Macierz m1;
	Macierz m2(3, 4);
	Macierz m3(3, 4);
	Macierz m4(m3);
	m1.drukuj();
	m2.drukuj();
	m4.drukuj();
	
    return 0;
}

