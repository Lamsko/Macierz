#pragma once
class Macierz
{
public:
	Macierz();
	Macierz(int w, int k);
	Macierz(const Macierz& m);
	Macierz(Macierz&& m);
	~Macierz();

	Macierz dodaj(Macierz m);

	void set();
	void set(int x, int w, int k);
	Macierz get();
	int get(int w, int k);
	void drukuj();

private:
	int wiersze, kolumny;
	double **p;

	void alokacja();
};