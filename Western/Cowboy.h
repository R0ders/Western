#pragma once
#include "Humain.h"

class Cowboy :
	public Humain
{
private:
	int popularite;
	string adjectif;
public:
	Cowboy(const string nom, const string boissonFavorite = "whisky", const int popularite = 0, const string adjectif = "vaillant");
	void sePresente();
};
