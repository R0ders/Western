// Western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
using namespace std;

/*
int main()
{
	Humain lucky("Lucky Luke", "coca-cola");

	cout << "Une histoire sur " << lucky.getNom() << endl;
	lucky.sePresente();
	lucky.boit();

	Humain* joe = new Humain("Joe", "whisky");

	cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();

	return 0;
}
*/

int main()
{
	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");

	// 1. La rencontre...
	lucky.sePresente();
	jenny.sePresente();

	// 2. Allons boire un coup...
	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();

}