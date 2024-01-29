#pragma once
#include "Humain.h"
#include "Brigand.h"
#include "Dame.h"
#include <iostream>
using namespace std;

class Brigand;
class Dame;

class Cowboy :
	public Humain
{
protected:
	int popularite;
	string adjectif;
public:
	Cowboy(const string nom, const string boissonFavorite = "whisky", const int popularite = 0, const string adjectif = "vaillant");
	int getPopularite();
	void setPopularite(const int populaire);
	string getQualite();
	void setQualite(const string qualite);
	void sePresente();
	void presentezVous(const Humain& humain);
	void incrementePopulaire();
	void decrementePopulaire();
	void tire(const Brigand & brigand);
	void emprisonne(Brigand & brigand);
	void libere(Dame & dame);
};
