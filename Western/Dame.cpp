#include "Dame.h"
#include <iostream>
using namespace std;

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe)
	:Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre")	// est la même chose que { couleurRobe = CouleurRobes; etat = etats; }
{
}

string Dame::getNom() const
{
	return "Miss " + nom;
}

string Dame::getEtat() const
{
	return etat;
}

void Dame::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl;
}

void Dame::changeDeRobe(const string couleurRobe)
{
	this->couleurRobe = couleurRobe; //this->couleurRobe permet de distinguer le parametre de la variable couleurRobe
	cout << "(" << nom << " ) -- " << "Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}

void Dame::seFaitKidnapper()
{
	cout << "** " << getNom() << " hurle" << endl;
	hurle();
}

void Dame::remercie(const Cowboy& heros)
{
	cout << "(" << nom << ") -- " << "Merci " << heros.getNom() << ", je suis enfin libre !" << endl;
}

void Dame::seFaitLiberer(const Cowboy & heros)
{
	remercie(heros);
}

void Dame::hurle()
{
	cout << "(" << nom << ") -- " << "Au secours, je me fais kidnapper !" << endl;
}
