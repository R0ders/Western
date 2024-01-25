#pragma once
#include "Humain.h"

// herite de la classe Humain
class Dame :
	public Humain
{
private:
	string couleurRobe, etat;

public:
	Dame(const string nom, const string boissonFavorite = "lait", const string couleurRobe = "Blanche");
	string getNom() const;
	string getEtat() const;
	void sePresente() const;
	void changeDeRobe(const string couleurRobe);
};
