#pragma once
#include "Humain.h"

class Barman :
	public Humain
{
private:
	string nomBar;
	
public:
	Barman(const string nom, const string nomBar, const string boissonFavorite = "biere");
	string getNomBar();
	void sePresente();
	void presentezVous(const Humain & humain);
	void sert(const Humain& client);

private:
	string terminePhrase();
};
