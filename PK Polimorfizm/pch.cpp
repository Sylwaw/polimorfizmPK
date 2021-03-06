// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"

BazaPojazdow::BazaPojazdow()
{

}
BazaPojazdow::BazaPojazdow(string numerRejestracyjny, string numerPesel)
{
	this->numerRejestracyjny = numerRejestracyjny;
	this->numerPesel = numerPesel;
}
void BazaPojazdow::zapiszNumerRejestracyjny(string nr)
{
	this->numerRejestracyjny = nr;
}
string BazaPojazdow::odczytajNumerRejestracyjny()
{
	return numerRejestracyjny;
}
void BazaPojazdow::zapiszNumerPesel(string nr)
{
	this->numerPesel = nr;
}
string BazaPojazdow::odczytajNumerPesel()
{
	return numerPesel;
}

SamochodOsobowy::SamochodOsobowy()
{
	cout << "WYWOLANY" << endl;
}
void SamochodOsobowy::print()
{
	cout << "Samochod osobowy: " << endl;
	cout << "Numer rejestracyjny: " << odczytajNumerRejestracyjny() << endl;
	cout << "Numer pesel: " << odczytajNumerPesel() << endl;
}


Tir::Tir()
{
	cout << "WYWOLANY" << endl;
}
void Tir::print()
{
	cout << "Tir: " << endl;
	cout << "Numer rejestracyjny: " << odczytajNumerRejestracyjny() << endl;
	cout << "Numer pesel: " << odczytajNumerPesel() << endl;
}



Autobus::Autobus()
{
	cout << "WYWOLANY" << endl;
}
void Autobus::print()
{
	cout << "Samochod osobowy: " << endl;
	cout << "Numer rejestracyjny: " << odczytajNumerRejestracyjny() << endl;
	cout << "Numer pesel: " << odczytajNumerPesel() << endl;
}



// In general, ignore this file, but keep it around if you are using pre-compiled headers.
