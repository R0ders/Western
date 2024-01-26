#pragma once
#include "Humain.h"
#include "Cowboy.h"
#include <iostream>
using namespace std;

class Cowboy;

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
	void seFaitKidnapper();
	void seFaitLiberer(const Cowboy & heros);

private:
	void hurle();
	void remercie(const Cowboy & heros);
};
