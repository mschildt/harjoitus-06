/*	Työn nimi: Harjoitus 6
	Tekijä: Mikael Schildt
	Kuvaus tehtävästä:
	Kirjoita ohjelma, joka kysyy käyttäjältä lompakossa olevan rahamäärän
	ja lihapiirakan hinnan.

	Ohjelma tutkii, onko käyttäjällä varaa ostaa lihapiirakka.
	Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon jää vielä rahaa.
	Muuten ohjelma kehottaa käyttäjää paastoamaan.

	Käytä vain kahta muuttujaa. älä vähennä lompakon sisältöä, ellet voi
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