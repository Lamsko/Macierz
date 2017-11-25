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
	void set(int x, int a, int b);

	Macierz get();
	int get(int a, int b);

private:
	int wiersze, kolumny;
	double **p;

	void alokacja();
};