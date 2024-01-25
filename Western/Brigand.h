#pragma once
#include "Humain.h"
class Brigand :
	public Humain
{
private:
	string comportement;
	int nbDamesEnleves;
	int recompense;
	bool enPrison;	// bool represente des valeurs booleennes donc si il est en prison ou si il n'est pas en prison.
public:
	Brigand(const string nom, const string boissonFavorite = "tord-boyaux", const string comportement = "mechant");

};
