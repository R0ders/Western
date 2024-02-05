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

/*

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
*/

/*
int main()
{
	Cowboy lucky("Lucky Luck", "coca-cola");
	Brigand joe("Joe");

	// Un Smith & Wesson de 100 $ chargé de 5 balles
	Arme* arme = new Arme("Smith & Wesson", 100, 5, 5);

	lucky.setArme(arme);	// Lucky se procure une arme
	 
	// et tire sur joe
	lucky.tires(joe);
}
*/

int main()
{
	Cowboy lucky("Lucky Luck", "coca-cola");
	Brigand joe("Joe");
	Dame jenny("Jenny");
	Barman robert("Robert", "Saloon Robert");
	Sherif clint("Clint", "eau");
	
	// Un Smith & Wesson de 100 $ chargé de 5 balles
	Arme* arme = new Arme("Smith & Wesson", 100, 5, 5);

	lucky.sePresente();
	jenny.sePresente();
	joe.sePresente();
	robert.sePresente();


	robert.sert(joe);

	cout <<  "** " << lucky.getNom() << " raconte ses aventures" << endl;

	clint.sePresente();
	clint.rechercheBrigands(joe);

	joe.boit();
	
	lucky.parle("je t'ai enfin trouver joe");
	joe.parle("tu es venu m'arreter n'est ce pas ?");
	lucky.parle("Tu est tres perspicace");
	joe.parle("je me laisserai pass faire ! hahaha !!");
	lucky.parle("que dirais tu de regle sa par un duel ?");
	joe.parle("qu'est ce que j'y gagne ?");
	lucky.parle("ta libertee");
	joe.parle("j'accepte");

	cout << "** " << lucky.getNom() << " le " << lucky.getQualite() << " et " << joe.getNom() << " le " << joe.getComportement() << " se place face a face" << endl;
	
	lucky.setArme(arme);
	joe.setArme(arme);

	lucky.tires(joe);
}