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
	cout << "** " << hurle << endl;
}

void Dame::seFaitLiberer()
{
	cout << "(" << nom << ") -- " << remercie << endl;
}

void Dame::hurle()
{
	cout << getNom() << " hurle" << endl;
}

void Dame::remercie(const Cowboy & heros)
{
	cout << "(" << nom << ") -- " << "Merci " << nom << ", je suis enfin libre !" << endl;
}
