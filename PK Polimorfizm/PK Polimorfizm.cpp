// PK Polimorfizm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class BazaPojazdow
{
	string numerRejestracyjny;
	string numerPesel;

public:
	BazaPojazdow()
	{

	}
	BazaPojazdow(string numerRejestracyjny, string numerPesel)
	{
		this->numerRejestracyjny = numerRejestracyjny;
		this->numerPesel = numerPesel;
	}
	void zapiszNumerRejestracyjny(string nr)
	{
		this->numerRejestracyjny = nr;
	}
	string odczytajNumerRejestracyjny()
	{
		return numerRejestracyjny;
	}
	void zapiszNumerPesel(string nr)
	{
		this->numerPesel = nr;
	}
	string odczytajNumerPesel()
	{
		return numerPesel;
	}
	virtual void print() = 0;
};

class SamochodOsobowy :public BazaPojazdow
{
public:
	SamochodOsobowy()
	{
		cout << "WYWOLANY" << endl;
	}
	virtual void print()
	{
		cout << "Samochod osobowy: " << endl;
		cout << "Numer rejestracyjny: " << odczytajNumerRejestracyjny() << endl;
		cout << "Numer pesel: " << odczytajNumerPesel() << endl;
	}
};

class Tir :public BazaPojazdow
{
public:
	Tir()
	{
		cout << "WYWOLANY" << endl;
	}
	virtual void print()
	{
		cout << "Tir: " << endl;
		cout << "Numer rejestracyjny: " << odczytajNumerRejestracyjny() << endl;
		cout << "Numer pesel: " << odczytajNumerPesel() << endl;
	}
};

class Autobus :public BazaPojazdow
{
public:
	Autobus()
	{
		cout << "WYWOLANY" << endl;
	}
	virtual void print()
	{
		cout << "Samochod osobowy: " << endl;
		cout << "Numer rejestracyjny: " << odczytajNumerRejestracyjny() << endl;
		cout << "Numer pesel: " << odczytajNumerPesel() << endl;
	}
};
int main()
{
	BazaPojazdow *bazaPojazdow;
	Autobus autobus;

	bazaPojazdow = &autobus;
	bazaPojazdow->zapiszNumerPesel("65421233");
	bazaPojazdow->zapiszNumerRejestracyjny("SPS");
	bazaPojazdow->print();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
