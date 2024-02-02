// Western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
#include "Barman.h"
#include "Sherif.h"
using namespace std;

/*

// Histoire 1:

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

/*

// Histoire 2:

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
*/

/*

// Histoire 3:

int main()
{
	Cowboy lucky("Lucky Luck", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");

	// 1. La rencontre...
	
	lucky.sePresente();
	jenny.sePresente();

	// 2. Mais un brigand arrive...

	joe.sePresente();
	joe.kidnappe(jenny);

	// 3. Heureusement le cowboy s'interpose...

	lucky.sePresente();
	joe.sePresente();
	lucky.tire(joe);
	lucky.emprisonne(joe);
	lucky.libere(jenny);
}
*/

/*

// Histoire 4a :

int main()
{
	Cowboy lucky("Lucky Luck", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert", "Saloon Robert");

	lucky.sePresente();
	jenny.sePresente();
	joe.sePresente();

	robert.sePresente();
	robert.sert(lucky);
	robert.sert(jenny);
	robert.sert(joe);
}
*/

// Histoire 4b :

int main()
{
	Cowboy lucky("Lucky Luck", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert", "Saloon Robert");
	Sherif clint("Clint");

	lucky.sePresente();
	jenny.sePresente();
	joe.sePresente();
	robert.sePresente();
	clint.sePresente();
	clint.rechercheBrigands(joe);
	joe.seFaitEmprisonner(clint);
}