#pragma once
#include "Cowboy.h"
#include "Humain.h"
#include "Brigand.h"

class Sherif :
	public Cowboy
{
private:
	int nbBrigandsCoffrer;

public:
	Sherif(const string nom, const string boissonFavorite, const string adjectif = "honnete");
	int getNbBrigandsCoffrer();
	string getNom();
	void sePresente();
	void coffreBrigands();
	void rechercheBrigands(Brigand & brigands);
	void augmenteNbBrigandsCoffrer();
};
