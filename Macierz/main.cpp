// Macierz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Macierz.h"
#include <iostream>

using namespace std;

int main()
{
	Macierz m1;
	m1.set(3, 1, 1); // setter elementu
	Macierz m2(2, 3);
	m2.set(); 
	Macierz m3(2, 3);	
	Macierz m4(m3);	 //konstruktor kopiujacy
	m1.drukuj();
	m2.drukuj();
	m4.drukuj();
	Macierz m5(m2.dodaj(m3)); //w trakcie wywolania metody jest uzywany konstruktor przenoszacy
	m5.drukuj();
	Macierz m6(3, 2);
	m6.set();
	Macierz m7(m2.mnoz(m6)); //w trakcie wywolania metody jest uzywany konstruktor przenoszacy
	m7.drukuj();
	Macierz m8(m2.mnozenieSkalar(3)); //w trakcie wywolania metody jest uzywany konstruktor przenoszacy
	m8.drukuj();

	cout << "getter pobiera element (2,2) macierzy: " << m6.get(2, 2) << endl;

    return 0;
}

