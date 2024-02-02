#include "Arme.h"

Arme::Arme(const string nom, int capacite, int prix, int nbBalles)
{
}

string Arme::getNom()
{
	return nom;
}

int Arme::getPrix()
{
	return prix;
}

int Arme::getNbBalles()
{
	return nbBalles;
}

void Arme::tire()
{
	cout << "** PAN !" << endl;
}

void Arme::rechargement(int nbBallles)
{
	nbBalles += capacite;
}
