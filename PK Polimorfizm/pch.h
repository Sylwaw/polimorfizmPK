// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class BazaPojazdow
{
	string numerRejestracyjny;
	string numerPesel;

public:
	BazaPojazdow();
	BazaPojazdow(string numerRejestracyjny, string numerPesel);
	void zapiszNumerRejestracyjny(string nr);
	string odczytajNumerRejestracyjny();
	void zapiszNumerPesel(string nr);
	string odczytajNumerPesel();
	virtual void print() = 0;
};

class SamochodOsobowy :public BazaPojazdow
{
public:
	SamochodOsobowy();
	virtual void print();
};

class Tir :public BazaPojazdow
{
public:
	Tir();
	virtual void print();
};

class Autobus :public BazaPojazdow
{
public:
	Autobus();
	virtual void print();
};

#endif //PCH_H
