#pragma once
#include <iostream>
using namespace std;

class Arme
{
private:
	string nom;
	int capacite, nbBalles, prix;

public:
	Arme(const string nom, int capacite, int prix = 100, int nbBalles = 0);
	string getNom();
	int getPrix();
	int getNbBalles();
	void tire();
	void rechargement(int nbBallles);
};

