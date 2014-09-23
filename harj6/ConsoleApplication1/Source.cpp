/*	Ty�n nimi: Harjoitus 6
	Tekij�: Mikael Schildt
	Kuvaus teht�v�st�:
	Kirjoita ohjelma, joka kysyy k�ytt�j�lt� lompakossa olevan raham��r�n
	ja lihapiirakan hinnan.

	Ohjelma tutkii, onko k�ytt�j�ll� varaa ostaa lihapiirakka.
	Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j�� viel� rahaa.
	Muuten ohjelma kehottaa k�ytt�j�� paastoamaan.

	K�yt� vain kahta muuttujaa. �l� v�henn� lompakon sis�lt��, ellet voi
	ostaa lihapiirakkaa.
*/
#include <iostream>
using namespace std;

float erotus;

void Laske(float, float);

void main()
{
	float RAHAMAARA;
	float LIHAPIIRAKKA;
	cout << "Miten paljon rahaa sinulla on?\n";
	cin >> RAHAMAARA;
	cout << "Miten paljon lihapiirakka maksaa?\n";
	cin >> LIHAPIIRAKKA;
	Laske(RAHAMAARA, LIHAPIIRAKKA);
	if (erotus >= 0)
		cout << "Rahaa jai jaljelle " << erotus;
	else if (erotus < 0)
		cout << "Olisiko aika paastota? Rahaa jai jaljelle " << RAHAMAARA;
	cout << "\n";

}

void Laske(float eka, float toka)
{
	erotus = eka - toka;
}