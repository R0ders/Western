#pragma once
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
#include <iostream>
using namespace std;

class Dame; // necessaire pour indiquer que Dame est une classe
class Cowboy; // necessaire pour indiquer que Cowboy est une classe

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
	string getComportement() const;
	int getNbDamesEnlevees() const;
	int getRecompense() const;
	void sePresente() const;
	void kidnappe(Dame & dame);
	void seFaitEmprisonner(Cowboy & cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison() const;
};
