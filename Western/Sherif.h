#pragma once
#include <iostream>
#include "Cowboy.h"
#include "Humain.h"
#include "Brigand.h"
using namespace std;

class Sherif :
	public Cowboy
{
private:
	int nbBrigandsCoffrer;

public:
	Sherif(const string nom, const string boissonFavorite = "eau", const int popularite = 0, const string adjectif = "honnete");
	int getNbBrigandsCoffrer();
	string getNom();
	void sePresente();
	void coffreBrigands();
	void rechercheBrigands(Brigand & brigands);
	void augmenteNbBrigandsCoffrer();
};
