#include "Humain.h"

Humain::Humain(const string Nom, const string boissonFavorites /* = eau */)
{
	nom = Nom;
	boissonFavorite = boissonFavorites;
}

string Humain::getBoissonFavorite() const
{
	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite)
{
	if (!nouvelleBoissonFavorite.empty()) // ! signifie l'inverse // empty permet de verifier si la chaine de caractere est vide
		boissonFavorite = nouvelleBoissonFavorite;
}

void Humain::parle(const string texte)
{
	cout << "(" << nom << ") --" << texte << endl;
}

string Humain::getNom() const
{
	return nom;
}

void Humain::sePresente()
{
	cout << "(" << nom << ") -- " <<"Bonjour, je m'appelle " << nom << " et ma boisson favorite est " << boissonFavorite << endl;
}

void Humain::boit()
{
	cout << "(" << nom << ") -- " << "Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
